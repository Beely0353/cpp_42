/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:45:07 by biaroun           #+#    #+#             */
/*   Updated: 2024/03/19 14:25:55 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : m_nbr(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i) : m_nbr(i << m_bit) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f) : m_nbr(roundf(f * (1 << m_bit))) {
    std::cout << "Float constructor called" << std::endl;
}

/*--------------------------------------------------*/

Fixed::Fixed(Fixed const &cpy) {
    std::cout << "Copy constructor called" << std::endl;
    *this = cpy;
}

Fixed &Fixed::operator=(Fixed const &a) {

	std::cout << "Copy assignment operator called" << std::endl;
    m_nbr = a.getRawBits();

	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

/*--------------------------------------------------*/

int Fixed::getRawBits(void) const {
    std::cout << "getRawbits member function called" << std::endl;
    return (m_nbr);
}

void Fixed::setRawBits(int const raw) {
    m_nbr = raw;
}

float Fixed::toFloat( void ) const {
    return static_cast<float>(m_nbr) / (1 << m_bit);
}

int Fixed::toInt( void ) const {
    return m_nbr >> m_bit;
}

/*--------------------------------------------------*/

std::ostream& operator<<( std::ostream &flux, Fixed const &a ) {
    flux << a.toFloat();
    return flux;
}