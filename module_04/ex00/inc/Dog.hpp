/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:37:20 by biaroun           #+#    #+#             */
/*   Updated: 2024/04/12 07:10:49 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
# define Dog_HPP

# include "Animal.hpp"

class Dog: public Animal {
    public:
        Dog(void);
        Dog(Dog const &src);
        ~Dog(void);

        void	makeSound(void) const;
};

#endif