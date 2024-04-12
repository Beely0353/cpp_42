/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 07:18:45 by biaroun           #+#    #+#             */
/*   Updated: 2024/04/12 07:31:37 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

    WrongAnimal::WrongAnimal(void) {
        std::cout << "Creation d'un WrongAnimal" << std::endl;
    }

    WrongAnimal::WrongAnimal(WrongAnimal const &src) {
        *this = src;
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