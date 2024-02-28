/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:17:37 by biaroun           #+#    #+#             */
/*   Updated: 2024/02/28 13:17:37 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
    cout << "Default constructor called" << endl;
    _nbr = 0;
}

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

int Fixed::getRawBits(void) const {
    cout << "getRawbits member function called" << endl;
    return (_bit);
}

void Fixed::setRawBits(int const raw) {
    _nbr = raw;
}