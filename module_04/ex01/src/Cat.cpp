/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:40:37 by biaroun           #+#    #+#             */
/*   Updated: 2024/06/05 17:09:15 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

    Cat::Cat(void) {
        type = "Cat";
        std::cout << "Creation d'un chat" << std::endl;
    }

    Cat::Cat( Cat const &src ): Animal(src) { 
        *this = src;
    }

    Cat &Cat::operator=(Cat const &rhs) {
        std::cout << "Cat copy assignment operator called" << std::endl;
        if (this != &rhs) {
            Animal::operator=(rhs);
            this->type = rhs.type;
        }
        return *this;
}

    Cat::~Cat(void) {
        std::cout << "Destruction d'un chat" << std::endl;
    }

/**********************************/

void	Cat::makeSound(void) const {
    std::cout << "miaou" << std::endl;
 }