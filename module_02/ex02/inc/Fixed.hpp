/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:26:57 by biaroun           #+#    #+#             */
/*   Updated: 2024/03/19 15:05:23 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include	<cmath>

class Fixed {
    public:
        Fixed(void);
        Fixed(const int i);
        Fixed(const float f);

        Fixed(Fixed const &cpy);
	    ~Fixed(void);
        /*--------------------------------------------------*/
        int getRawBits(void) const;
        void setRawBits(int const raw);

        float toFloat( void ) const;
        int toInt( void ) const;

        static Fixed min(Fixed &a, Fixed &b);
        static Fixed min(const Fixed &a, const Fixed &b);

        static Fixed max(Fixed &a, Fixed &b);
        static Fixed max(const Fixed &a, const Fixed &b);

        /*--------------------------------------------------*/
        bool operator>(Fixed const &other) const;
        bool operator<(Fixed const &other) const;
        bool operator>=(Fixed const &other) const;
        bool operator<=(Fixed const &other) const;
        bool operator==(Fixed const &other) const;
        bool operator!=(Fixed const &other) const;

        Fixed operator+(Fixed const &rhs) const;
        Fixed operator-(Fixed const &rhs) const;
        Fixed operator*(Fixed const &rhs) const;
        Fixed operator/(Fixed const &rhs) const;

        Fixed &operator=(Fixed const &rhs);

        Fixed &operator++(void);
        Fixed &operator--(void);
        Fixed operator++(int);
        Fixed operator--(int);

        /*--------------------------------------------------*/
        

    private:
        static const int m_bit = 8;
        int m_nbr;
};

std::ostream &operator<<( std::ostream &flux, Fixed const &a );

#endif