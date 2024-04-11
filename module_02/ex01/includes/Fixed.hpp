/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:16:35 by biaroun           #+#    #+#             */
/*   Updated: 2024/02/28 13:16:35 by biaroun          ###   ########.fr       */
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
        Fixed &operator=(Fixed const &a);
	    ~Fixed(void);

        int getRawBits(void) const;
        void setRawBits(int const raw);

        float toFloat( void ) const;
        int toInt( void ) const;

    private:
        static const int m_bit = 8;
        int m_nbr;
};

std::ostream &operator<<( std::ostream &flux, Fixed const &a );

#endif