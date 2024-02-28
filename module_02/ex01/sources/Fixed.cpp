/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:45:07 by biaroun           #+#    #+#             */
/*   Updated: 2024/02/28 14:59:10 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
    cout << "Default constructor called" << endl;
    _nbr = 0;
}

Fixed::Fixed(const int e) {
    cout << "Int constructor called" << endl;
}

Fixed::Fixed(const float f) {
    cout << "Float constructor called" << endl;
}

/*--------------------------------------------------*/

Fixed::Fixed(Fixed const &cpy) {
    cout << "Copy constructor called" << endl;
    *this = cpy;
}

Fixed &Fixed::operator=(Fixed const &rhs) {

	std::cout << "Copy assignment operator called" << std::endl;
    _nbr = rhs.getRawBits();

	return *this;
}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;
}

/*--------------------------------------------------*/

int Fixed::getRawBits(void) const {
    cout << "getRawbits member function called" << endl;
    return (_bit);
}

void Fixed::setRawBits(int const raw) {
    _nbr = raw;
}

float Fixed::toFloat( void ) const {
    return static_cast<float>(_nbr) / (1 << _bit);
}

int Fixed::toInt( void ) const {
    
}