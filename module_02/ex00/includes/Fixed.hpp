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
using namespace std;

class Fixed {
    public:
        Fixed(void);
        Fixed(Fixed const &cpy);
        Fixed &operator=(Fixed const &rhs);
	    ~Fixed(void);

        int getRawBits(void) const;
        void setRawBits(int const raw);

    private:
        int _nbr;
        static const int _bit = 8;
};

#endif