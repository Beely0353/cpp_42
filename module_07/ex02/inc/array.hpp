/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 14:29:22 by biaroun           #+#    #+#             */
/*   Updated: 2024/08/26 13:01:18 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdexcept>

template <typename T>
class Array {
    public:
        Array(void): m_len(0), m_array(new T[m_len]){
            std::cout << "Default Constructor called" << std::endl;
        }
        
        Array(unsigned int n): m_len(n), m_array(new T[m_len]){
            std::cout << "Constructor called" << std::endl;
        }
        
        Array(const Array &cpy): m_len(cpy.size()), m_array(new T[m_len]) {
            std::cout << "Copy Constuctor called" << std::endl;
            for (size_t i = 0; i < m_len; i++)
                m_array[i] = cpy.m_array[i];
        }

        Array &operator=(const Array &rhs) {
			if (this != &rhs) {
                delete[] m_array;
				m_len = rhs.size();
				m_array = new T[m_len];
				for (size_t i = 0; i < size(); i++)
					m_array[i] = rhs.m_array[i];
			}
			return (*this);
        }
        
        ~Array(){
            std::cout << "Deconstructors called" << std::endl;
            delete [] m_array;
        }

        T &operator[]( unsigned int i ){
            if (i >= m_len) 
				throw Array<T>::InvalidIndexException();
            return m_array[i];
        }

		class	InvalidIndexException : public std::exception
		{
		public:
			virtual const char	*what() const throw();
		};
    
        size_t size() const {
            return (m_len);
        }

    private:
        unsigned int   m_len;
        T       *m_array;
};

template <typename T>
const char* Array<T>::InvalidIndexException::what() const throw() {
    return "Index out of range";
}
