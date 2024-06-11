/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:43:55 by biaroun           #+#    #+#             */
/*   Updated: 2024/06/11 18:46:59 by biaroun          ###   ########.fr       */
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
    
    Dog &Dog::operator=(Dog const &rhs) {
        std::cout << "Dog copy assignment operator called" << std::endl;
        if (this != &rhs) {
        Animal::operator=(rhs);
        }
        return *this;
}

    Dog::~Dog(void) {
        delete(m_brain);
        std::cout << "Destruction d'un chien" << std::endl;
    }

/**********************************/

void	Dog::makeSound(void) const {
    std::cout << "woaf" << std::endl;
 }

 void    Dog::setBrain(const std::string& idea, int index){
    m_brain->SetIdea(idea, index);
}

void    Dog::sayBrain(int index) {
    std::cout << "mon idée n°" << index << " est " << m_brain->GetIdea(index)<< std::endl;
}