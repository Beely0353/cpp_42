/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:53:10 by biaroun           #+#    #+#             */
/*   Updated: 2024/06/11 18:58:37 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

    AAnimal::AAnimal(void) {
        std::cout << "Creation d'un AAnimal" << std::endl;
    }

    AAnimal::AAnimal(AAnimal const &src) {
        *this = src;
    }
    
    AAnimal &AAnimal::operator=(AAnimal const &rhs) {
        std::cout << "AAnimal copy assignment operator called" << std::endl;
        if (this != &rhs) {
            this->type = rhs.type;
        }
        return *this;
    }

    AAnimal::~AAnimal(void) {
        std::cout << "Destruction d'un AAnimal" << std::endl;
    }

/**********************************/

    std::string	AAnimal::getType( void ) const {
        return (type);
    }

    void	AAnimal::makeSound(void) const {
        std::cout << "..." << std::endl;
    }