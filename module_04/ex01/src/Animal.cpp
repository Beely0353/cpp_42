/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:38:11 by biaroun           #+#    #+#             */
/*   Updated: 2024/04/12 07:40:20 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

    Animal::Animal(void) {
        std::cout << "Creation d'un animal" << std::endl;
    }

    Animal::Animal(Animal const &src) {
        *this = src;
    }

    Animal::~Animal(void) {
        std::cout << "Destruction d'un animal" << std::endl;
    }

/**********************************/

    std::string	Animal::getType( void ) const {
        return (type);
    }

    void	Animal::makeSound(void) const {
        std::cout << "..." << std::endl;
    }