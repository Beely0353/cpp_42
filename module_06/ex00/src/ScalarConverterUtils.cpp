/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverterUtils.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:38:31 by biaroun           #+#    #+#             */
/*   Updated: 2024/08/09 21:32:10 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

    bool    ScalarConverter::isChar(void) const {
        return m_av.length() == 1 && std::isalpha( m_av[0] ) && std::isprint( m_av[0] );
    }

    bool    ScalarConverter::isInt( void ) const {
        int    j = 0;
        if ( m_av[j] == '-' || m_av[j] == '+' )
            j++;
        while (m_av[j]) {
            if ( !std::isdigit( m_av[j] ) )
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
        std::istringstream iss(m_av);
        float f;
        iss >> f;

        if (iss.fail() || !iss.eof()) {
            return false;
        }
        return true;
    }

    bool ScalarConverter::isLite(void) const {
        return (m_av == "nan" || m_av == "+inf" || m_av == "-inf");
    }
