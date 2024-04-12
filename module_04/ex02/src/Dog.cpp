/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:43:55 by biaroun           #+#    #+#             */
/*   Updated: 2024/04/12 07:47:39 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

    Dog::Dog(void) {
        type = "Dog";
        m_brain = new Brain();
        std::cout << "Creation d'un chien" << std::endl;
    }

    Dog::Dog(Dog const &src): Animal(src) {
        *this = src;
    }

    Dog::~Dog(void) {
        delete m_brain;
        std::cout << "Destruction d'un chien" << std::endl;
    }

/**********************************/

void	Dog::makeSound(void) const {
    std::cout << "woaf" << std::endl;
 }