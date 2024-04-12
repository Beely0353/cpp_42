/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 07:17:38 by biaroun           #+#    #+#             */
/*   Updated: 2024/04/12 07:31:28 by biaroun          ###   ########.fr       */
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

    WrongCat::~WrongCat(void) {
        std::cout << "Destruction d'un WrongCat" << std::endl;
    }

/**********************************/

void	WrongCat::makeSound(void) const {
    std::cout << "uoaim" << std::endl;
 }