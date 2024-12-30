/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 17:31:48 by biaroun           #+#    #+#             */
/*   Updated: 2024/12/30 17:39:39 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

        BitcoinExchange::BitcoinExchange()
        {}

        BitcoinExchange::BitcoinExchange(const BitcoinExchange & other)
        : _Rates(other._Rates)
        {}

        BitcoinExchange & BitcoinExchange::operator = (const BitcoinExchange & other)
        {
            if (this != &other)
                _Rates = other._Rates;

            return *this;
        }

        BitcoinExchange::~BitcoinExchange()
        {}

        bool isNotSpace(char ch){
            return !std::isspace(static_cast<unsigned char>(ch));
        }

        std::string& Ftrim(std::string &s){
            s.erase(s.begin(), std::find_if(s.begin(), s.end(), isNotSpace));
            return s;
        }


        std::string& Ltrim(std::string &s){
            s.erase(std::find_if(s.rbegin(), s.rend(), isNotSpace).base(), s.end());
            return s;
        }

        std::string& trim(std::string &s){
            return Ftrim(Ltrim(s));
        }

        void BitcoinExchange::setDataBase(const std::string filename) {
            std::ifstream file(filename.c_str());
            if (!file) {
                throw std::runtime_error("Error: could not open file.");
            }

            std::string line, date;
            double rate;

            // Lire la première ligne et vérifier l'entête
            if (std::getline(file, line)) {
                if (line != "date,exchange_rate") {
                    std::istringstream ss(line);
                    if (std::getline(ss, date, ',') && (ss >> rate)) {
                        _Rates[date] = rate;
                    }
                }
            }

            // Lire le reste des lignes
            while (std::getline(file, line)) {
                std::stringstream ss(line);
                if (std::getline(ss, date, ',') && (ss >> rate)) {
                    _Rates[date] = rate;
                }
            }
        }


        void BitcoinExchange::setInput(const std::string filename) {
            std::ifstream file(filename.c_str());
                if (!file) {
                    throw std::runtime_error("Error: could not open file.");
                }

                std::string inputLine;

                // Vérifier la première ligne
                if (std::getline(file, inputLine)) {
                    trim(inputLine);
                    if (inputLine != "date | value") {
                        std::cout << "Error: invalid header." << std::endl;
                        return;
                    }
                } else {
                    std::cout << "Error: file is empty." << std::endl;
                    return;
                }

                // Lire le reste des lignes
                while (std::getline(file, inputLine)) {
                    trim(inputLine);

                    // Valider le format
                    size_t separator = inputLine.find(" | ");
                    if (separator != 10 || separator == std::string::npos) {
                        std::cout << "Error: bad input => " << (inputLine.empty() ? "empty" : inputLine) << std::endl;
                        continue;
                    }

                    // Extraire les parties
                    std::string datePart = inputLine.substr(0, separator);
                    std::string valuePart = inputLine.substr(separator + 3);

                    trim(datePart);
                    trim(valuePart);

                    // Valider la date
                    if (!isValidDate(datePart)) {
                        std::cout << "Error: bad input => " << datePart << std::endl;
                        continue;
                    }

                    // Valider la valeur
                    double value = atof(valuePart.c_str());
                    if (!isValidValue(valuePart) || value <= 0) {
                        std::cout << "Error: not a positive number." << std::endl;
                        continue;
                    }

                    if (value > 1000) {
                        std::cout << "Error: too large a number." << std::endl;
                        continue;
                    }

                    // Calculer et afficher le résultat
                    double rate = getRate(datePart);
                    std::cout << datePart << " => " << value << " = " << value * rate << std::endl;
                }
            }


        double BitcoinExchange::getRate(const std::string date) const{
            std::map<std::string, double>::const_iterator it = _Rates.lower_bound(date);
            if (it == _Rates.end() || it->first != date)
            {
                if (it == _Rates.begin())
                    return 0;
                --it;
            }
            return it->second;
        }

        bool BitcoinExchange::isValidDate(const std::string & date) const {
            /* Check if the date is of the form YYYY-MM-DD */
            if (date.size() != DATE_LENGTH || date[YEAR_POSITION] != '-' || date[MONTH_POSITION] != '-')
                return false;

            /* Check if the year is a number */
            for (int i = MIN_YEAR_DIGITS; i < MAX_YEAR_DIGITS; ++i)
            {
                if (!isdigit(date[i]))
                    return false;
            }

            /* Check if the month is a number */
            for (int i = MIN_MONTH_DIGITS; i < MAX_MONTH_DIGITS; ++i)
            {
                if (!isdigit(date[i]))
                    return false;
            }

            /* Check if the day is a number */
            for (int i = MIN_DAY_DIGITS; i < MAX_DAY_DIGITS; ++i)
            {
                if (!isdigit(date[i]))
                    return false;
            }

            /* Extract year from date: substr first 4 chars, c_str to const char* for atoi, atoi to int */
            int year = atoi(date.substr(MIN_YEAR_DIGITS, YEAR_LENGTH).c_str());

            /* Extract month from date: substr 5th and 6th chars, c_str to const char* for atoi, atoi to int */
            int month = atoi(date.substr(MIN_MONTH_DIGITS, MONTH_LENGTH).c_str());

            /* Extract day from date: substr 8th and 9th chars, c_str to const char* for atoi, atoi to int */
            int day = atoi(date.substr(MIN_DAY_DIGITS, DAY_LENGTH).c_str());

            /* Check if the month is between 1 and 12 */
            if (month < MIN_MONTH || month > MAX_MONTH)
                return false;

            /* Check if the day is between 1 and 31 */
            if (day < MIN_DAY || day > MAX_DAY)
                return false;

            /* Check if the month is February */
            if (month == FEBRUARY)
            {
                /* Declare a boolean isLeap */
                bool isLeap;

                /* Check if the year is a leap year */
                isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

                /* Check if the day is greater than 29 or 29 on a non-leap year */
                if (day > 29 || (day == 29 && !isLeap))
                    return false;
            }

            /* Check if the month is April, June, September or November */
            else if (month == APRIL || month == JUNE || month == SEPTEMBER || month == NOVEMBER)
            {
                /* Check if the day is greater than 30 */
                if (day > 30)
                    return false;
            }

            return true;
        }

        bool BitcoinExchange::isValidValue(const std::string & value) const
        {
            char* end;
            double val = strtod(value.c_str(), &end);

            return end != value.c_str() && *end == '\0' && val >= 0;
        }        
