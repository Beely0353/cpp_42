/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 07:18:45 by biaroun           #+#    #+#             */
/*   Updated: 2024/06/05 17:12:32 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

    WrongAnimal::WrongAnimal(void) {
        std::cout << "Creation d'un WrongAnimal" << std::endl;
    }

    WrongAnimal::WrongAnimal(WrongAnimal const &src) {
        *this = src;
    }

    WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs) {
        std::cout << "WrongAnimal copy assignment operator called" << std::endl;
        if (this != &rhs) {
            this->type = rhs.type;
        }
        return *this;
    }

    WrongAnimal::~WrongAnimal(void) {
        std::cout << "Destruction d'un WrongAnimal" << std::endl;
    }

/**********************************/

    std::string	WrongAnimal::getType( void ) const {
        return (type);
    }

    void	WrongAnimal::makeSound(void) const {
        std::cout << "Wrong sound" << std::endl;
    }