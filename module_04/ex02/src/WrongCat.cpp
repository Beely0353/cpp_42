/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 07:17:38 by biaroun           #+#    #+#             */
/*   Updated: 2024/06/11 18:57:11 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

    WrongCat::WrongCat(void) {
        std::cout << "Creation d'un WrongCat" << std::endl;
        type = "Cat";
    }

    WrongCat::WrongCat( WrongCat const &src ): WrongAnimal(src) { 
        *this = src;
    }

    WrongCat &WrongCat::operator=(WrongCat const &rhs) {
        std::cout << "WrongCat copy assignment operator called" << std::endl;
        if (this != &rhs) {
            WrongAnimal::operator=(rhs); // Appel à l'opérateur d'affectation de la classe de base
            // Pas de membres spécifiques à WrongCat à copier pour l'instant
        }
        return *this;
    }
    WrongCat::~WrongCat(void) {
        std::cout << "Destruction d'un WrongCat" << std::endl;
    }

/**********************************/

void	WrongCat::makeSound(void) const {
    std::cout << "uoaim" << std::endl;
 }