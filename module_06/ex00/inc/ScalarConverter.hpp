/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 17:31:32 by biaroun           #+#    #+#             */
/*   Updated: 2024/08/09 22:15:40 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <cstdlib>
#include <sstream>


enum e_type {
    NONE,
    INT,
    FLOAT,
    CHAR,
    DOUBLE,
    LITERALS
};

class ScalarConverter {
    public:
        ScalarConverter(char *av);
        ScalarConverter(const ScalarConverter &cpy);
        ~ScalarConverter(void);
        ScalarConverter &operator=(const ScalarConverter &rhs);
        
        void    setChar(char c);
        char    getChar(void) const;
        bool    isChar(void) const;
        void    printChar(void) const;

        void    setInt(int i);
        int     getInt(void) const;
        bool    isInt(void) const;
        void    printInt(void) const;
        
        void    setFloat(float f);
        float   getFloat(void) const;
        bool    isFloat(void) const;
        void    printFloat(void) const;

        void    setDouble(double d);
        double  getDouble(void) const;
        bool    isDouble(void) const;
        void    printDouble(void) const;

        void   isImpossible(void);
        bool   isLite( void ) const;
        void   converter(void);
        void   setType(void);
        
    private:
        char   m_char;
        int    m_int;
        float  m_float;
        double m_double;

        bool   m_impossible;

        e_type m_type;

        std::string m_av;
};
