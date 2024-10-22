/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverterUtils.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:38:31 by biaroun           #+#    #+#             */
/*   Updated: 2024/10/22 22:22:43 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

    bool    ScalarConverter::isChar(void) const {
        return m_av.length() == 1 && std::isprint(m_av.at(0));
    }

    bool    ScalarConverter::isInt( void ) const {
        int    j = 0;

        if ( m_av[j] == '-' || m_av[j] == '+' )
            j++;
        if (m_av[j] == '\0')
            return false;
        while (m_av[j]) {
            if (!std::isdigit( m_av[j] ) )
                return false;
            j++;
        }
        return true;
    }

    bool ScalarConverter::isDouble(void) const{
        std::istringstream iss(m_av);
        double d;
        iss >> d;

        if (iss.fail() || !iss.eof()) {
            return false;
        }
        return true;
    }

    bool ScalarConverter::isFloat(void) const {
        std::string input = m_av;

        if (!input.empty() && input[input.length() - 1] == 'f') {
            input.erase(input.length() - 1);
        }

        std::istringstream iss(input);
        float f;
        iss >> f;

        if (iss.fail() || !iss.eof()) {
            return false;
        }
        return true;
    }

    bool ScalarConverter::isLite(void) const {
        return (m_av == "nan" || m_av == "+inf" || m_av == "-inf" || m_av == "+inff" || m_av == "-inff" || m_av == "nanf");
    }
