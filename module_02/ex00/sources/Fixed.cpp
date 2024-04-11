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

Fixed::Fixed(): m_nbr(0) {
    std::cout << "Default constructor called" << std::endl;
}

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

int Fixed::getRawBits(void) const {
    std::cout << "getRawbits member function called" << std::endl;
    return (m_nbr);
}

void Fixed::setRawBits(int const raw) {
    _nbr = raw;
}