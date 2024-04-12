/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:40:37 by biaroun           #+#    #+#             */
/*   Updated: 2024/04/12 07:45:35 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

    Cat::Cat(void) {
        type = "Cat";
        m_brain = new Brain();
        std::cout << "Creation d'un chat" << std::endl;
    }

    Cat::Cat( Cat const &src ): Animal(src) { 
        *this = src;
    }

    Cat::~Cat(void) {
        delete m_brain;
        std::cout << "Destruction d'un chat" << std::endl;
    }

/**********************************/

void	Cat::makeSound(void) const {
    std::cout << "miaou" << std::endl;
 }