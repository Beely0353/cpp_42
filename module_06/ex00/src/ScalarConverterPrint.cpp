/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverterPrint.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:38:05 by biaroun           #+#    #+#             */
/*   Updated: 2024/10/22 22:26:44 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

    void ScalarConverter::printChar(void) const {
        if (m_type == LITERALS)
            return;
        std::cout << "char: ";
        if (m_impossible || isLite())//revoir
            std::cout << "Impossible";
        else if (m_int < 0 || m_int > 127)
            std::cout << "Non displayable";
        else if (!std::isprint(m_int))
            std::cout << "None displayable";
        else
            std::cout << m_char;
        std::cout << std::endl;
    }

    void ScalarConverter::printInt(void) const {
        if (m_type == LITERALS)
            return;
        std::cout << "int: ";
        if (m_impossible || isLite() ||  m_double > std::numeric_limits<int>::max() || m_double < std::numeric_limits<int>::min())
            std::cout << "Impossible";
        else
            std::cout << m_int;
        std::cout << std::endl;
    }

    void ScalarConverter::printFloat(void) const {
        if (m_type == LITERALS)
            return;
        std::cout << "float: ";
        if (m_impossible)
            std::cout << "Impossible";
        else if (isLite())
            std::cout << m_av << "f";
        else {
            if (m_float - static_cast<int>(m_float) == 0)
                std::cout << m_float << ".0f";
            else
                std::cout << m_float << "f";
        }
        std::cout << std::endl;
    }

    void ScalarConverter::printDouble(void) const {
        if (m_type == LITERALS)
            return;
        std::cout << "double: ";
        if (m_impossible)
            std::cout << "Impossible";
        else if (isLite())
            std::cout << m_av;
        else {
            std::cout << m_double;
            if (m_double - static_cast<int>(m_double) == 0)
                std::cout << ".0";
        }
        std::cout << std::endl;
    }


    void ScalarConverter::printLiterals (void) const {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;

        if (m_av == "+inf" || m_av == "+inff") {
            std::cout << "float: +inff" << std::endl;
            std::cout << "int: +inf" << std::endl;
        }
        else if (m_av == "-inf" || m_av == "-inff") {
            std::cout << "float: -inff" << std::endl;
            std::cout << "int: -inf" << std::endl;
        }
        else if (m_av == "nan") {
            std::cout << "float: nanf" << std::endl;
            std::cout << "int: nan" << std::endl;
        }
        else {
            std::cout << "float: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
        }
        
    }
