/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 21:31:06 by biaroun           #+#    #+#             */
/*   Updated: 2024/07/09 21:51:34 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

    #include "ScalarConverter.hpp"

    ScalarConverter::ScalarConverter(void) {}

    ScalarConverter::ScalarConverter(const ScalarConverter &cpy) {
        *this = cpy;
    }
    
    ScalarConverter &ScalarConverter::operator=(const ScalarConverter &rhs) {
        if ( this != &rhs ) {
            this->m_int = rhs.getInt();
            this->m_float = rhs.getFloat();
            this->m_char = rhs.getChar();
        }
        return *this;
    }

    ScalarConverter::~ScalarConverter(void) {}

/*******************************************************/

        void ScalarConverter::setChar(char c) {
            m_char = c;
        }
        char ScalarConverter::getChar(void) const {
            return m_char;
        }

        void ScalarConverter::setInt(int i) {
            m_int = i;
        }
        int ScalarConverter::getInt(void) const {
            return m_int;
        }
        
        void ScalarConverter::setFloat(float f) {
            m_float = f;
        }
        float ScalarConverter::getFloat(void) const {
            return m_float;
        }

        void ScalarConverter::setDouble(double d) {
            m_double = d;
        }
        double ScalarConverter::getDouble(void) const {
            return m_double;
        }

        void   ScalarConverter::converter(void) {
            switch (m_type) {
                case CHAR:
                    m_char   = m_av[0];
                    m_int    = static_cast< int >(m_char);
                    m_float  = static_cast< float >(m_char);
                    m_double = static_cast< double >(m_char);
                    break;
                case INT:
                    m_int    = std::stoi(m_av);
                    m_char   = static_cast< char >( m_int );
                    m_float  = static_cast< float >( m_int );
                    m_double = static_cast< double >( m_int );
                    break;
                case FLOAT:
                    m_float  = std::stof(m_av);
                    m_char   = static_cast< char >( m_float );
                    m_int    = static_cast< int >( m_float );
                    m_double = static_cast< double >( m_float );
                    break;
                case DOUBLE:
                    m_double = std::stod(m_av);
                    m_float  = static_cast< float >( m_double );
                    m_char   = static_cast< char >( m_double );
                    m_int    = static_cast< int >( m_double );
                    break;
                default:
                    break;
            }
        }
