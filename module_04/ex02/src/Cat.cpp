/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:40:37 by biaroun           #+#    #+#             */
/*   Updated: 2024/06/11 18:52:29 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

    Cat::Cat(void) {
        type = "Cat";
        m_brain = new Brain();
        std::cout << "Creation d'un chat" << std::endl;
    }

    Cat::Cat( Cat const &src ): AAnimal(src) { 
        *this = src;
    }

    Cat &Cat::operator=(Cat const &rhs) {
        std::cout << "Cat copy assignment operator called" << std::endl;
        if (this != &rhs) {
            AAnimal::operator=(rhs);
            this->type = rhs.type;
        }
        return *this;
}

    Cat::~Cat(void) {
        delete(m_brain);
        std::cout << "Destruction d'un chat" << std::endl;
    }

/**********************************/

    void	Cat::makeSound(void) const {
        std::cout << "miaou" << std::endl;
    }

    void    Cat::setBrain(const std::string& idea, int index){
        m_brain->SetIdea(idea, index);
    }

    void    Cat::sayBrain(int index) {
        std::cout << "mon idée n°" << index << " est " << m_brain->GetIdea(index)<< std::endl;
    }