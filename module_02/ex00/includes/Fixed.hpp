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

class Fixed {
    public:
        Fixed(void);
        Fixed(Fixed const &cpy);
        Fixed &operator=(Fixed const &a);
	    ~Fixed(void);

        int getRawBits(void) const;
        void setRawBits(int const raw);

    private:
        int m_nbr;
        static const int m_bit = 8;
};

#endif