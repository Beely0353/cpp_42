/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:35:20 by biaroun           #+#    #+#             */
/*   Updated: 2024/12/30 17:30:24 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "utils.hpp"
#include <map>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <cctype>

#define DATE_LENGTH 10
#define YEAR_POSITION 4
#define MONTH_POSITION 7
#define MIN_YEAR_DIGITS 0
#define MAX_YEAR_DIGITS 4
#define MIN_MONTH_DIGITS 5
#define MAX_MONTH_DIGITS 7
#define MIN_DAY_DIGITS 8
#define MAX_DAY_DIGITS 10
#define MIN_MONTH 1
#define MAX_MONTH 12
#define MIN_DAY 1
#define MAX_DAY 31

/* Définition des constantes pour les longueurs de sous-chaînes */
#define YEAR_LENGTH 4
#define MONTH_LENGTH 2
#define DAY_LENGTH 2

/* Définition des constantes pour les mois */
#define FEBRUARY 2
#define APRIL 4
#define JUNE 6
#define SEPTEMBER 9
#define NOVEMBER 11

class BitcoinExchange {
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange & other);
        BitcoinExchange & operator = (const BitcoinExchange & other);
        ~BitcoinExchange();

        void setDataBase(const std::string filename);
        void setInput(const std::string filename);
        double getRate(const std::string date) const;
        

    private:
        std::map<std::string, double> _Rates;
        bool isValidValue(const std::string & value) const;
        bool isValidDate(const std::string & date) const;
};
