/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:43:13 by biaroun           #+#    #+#             */
/*   Updated: 2024/03/19 15:13:12 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : m_nbr(0) {
    //std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i) : m_nbr(i << m_bit) {
    //std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f) : m_nbr(roundf(f * (1 << m_bit))) {
    //std::cout << "Float constructor called" << std::endl;
}

/*--------------------------------------------------*/

Fixed::Fixed(Fixed const &cpy) {
    //std::cout << "Copy constructor called" << std::endl;
    *this = cpy;
}

Fixed::~Fixed() {
	//std::cout << "Destructor called" << std::endl;
}

/*--------------------------------------------------*/

int Fixed::getRawBits(void) const {
    //std::cout << "getRawbits member function called" << std::endl;
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

Fixed Fixed::min(Fixed &a, Fixed &b) {
    return (a < b) ? a : b;
}

Fixed Fixed::min(const Fixed &a, const Fixed &b) {
    return (a < b) ? a : b;
}

Fixed Fixed::max(Fixed &a, Fixed &b) {
    return (a > b) ? a : b;
}

Fixed Fixed::max(const Fixed &a, const Fixed &b) {
    return (a > b) ? a : b;
}

/*--------------------------------------------------*/

bool Fixed::operator>(Fixed const &other) const {
    return this->m_nbr > other.m_nbr;
}

bool Fixed::operator<(Fixed const &other) const {
    return this->m_nbr < other.m_nbr;
}

bool Fixed::operator>=(Fixed const &other) const {
    return this->m_nbr >= other.m_nbr;
}

bool Fixed::operator<=(Fixed const &other) const {
    return this->m_nbr <= other.m_nbr;
}

bool Fixed::operator==(Fixed const &other) const {
    return this->m_nbr == other.m_nbr;
}

bool Fixed::operator!=(Fixed const &other) const {
    return this->m_nbr != other.m_nbr;
}


Fixed Fixed::operator+(Fixed const &rhs) const {
    return this->toFloat() + rhs.toFloat();
}

Fixed Fixed::operator-(Fixed const &rhs) const {
    return this->toFloat() - rhs.toFloat();
}

Fixed Fixed::operator*(Fixed const &rhs) const {
    return this->toFloat() * rhs.toFloat();
}

Fixed Fixed::operator/(Fixed const &rhs) const {
    return this->toFloat() / rhs.toFloat();
}

Fixed &Fixed::operator=(Fixed const &rhs) {
    this->m_nbr = rhs.getRawBits();
    return *this;
}


Fixed &Fixed::operator++(void) {
    ++this->m_nbr;
    return *this;
}

Fixed &Fixed::operator--(void) {
    --this->m_nbr;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
    this->m_nbr++;
    return (tmp);
}

Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
    this->m_nbr--;
    return (tmp);
}

std::ostream& operator<<( std::ostream &flux, Fixed const &a ) {
    flux << a.toFloat();
    return flux;
}