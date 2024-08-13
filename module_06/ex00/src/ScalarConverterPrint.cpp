/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverterPrint.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:38:05 by biaroun           #+#    #+#             */
/*   Updated: 2024/08/09 22:17:23 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

    void ScalarConverter::printChar(void) const {
        std::cout << "char: ";
        if (m_impossible || isLite())//revoir
            std::cout << "Impossible";
        else if (!std::isprint(m_int))
            std::cout << "None displayable";
        else
            std::cout << m_char;
        std::cout << std::endl;
    }

    void ScalarConverter::printInt(void) const {
        std::cout << "int: ";
        if (m_impossible || isLite())//revoir
            std::cout << "Impossible";
        else
            std::cout << m_int;
        std::cout << std::endl;
    }

    void ScalarConverter::printFloat(void) const {
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
