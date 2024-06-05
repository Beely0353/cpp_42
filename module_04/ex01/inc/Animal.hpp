/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:28:13 by biaroun           #+#    #+#             */
/*   Updated: 2024/06/05 17:07:29 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {
    public:
        Animal(void);
        Animal(Animal const &src);
        Animal &operator=(Animal const &rhs);
        virtual ~Animal( void );

        std::string	getType( void ) const;

        virtual void	makeSound(void) const;
    protected:
        std::string type;
};

#endif