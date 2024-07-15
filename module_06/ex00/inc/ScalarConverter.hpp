/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 17:31:32 by biaroun           #+#    #+#             */
/*   Updated: 2024/07/09 21:48:21 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string.h>
#include <iostream>
#include <cstdlib>

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
        ScalarConverter(void);
        ScalarConverter(const ScalarConverter &cpy);
        ScalarConverter(void);
        ScalarConverter &operator=(const ScalarConverter &rhs);
        
        void setChar(char c);
        char getChar(void) const;

        void setInt(int i);
        int getInt(void) const;
        
        void setFloat(float f);
        float getFloat(void) const;

        void setDouble(double d);
        double getDouble(void) const;

        void   converter(void);
        
    private:
        char   m_char;
        int    m_int;
        float  m_float;
        double m_double;

        e_type m_type;

        std::string m_av;
};
