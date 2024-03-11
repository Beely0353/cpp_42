/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:51:25 by biaroun           #+#    #+#             */
/*   Updated: 2024/03/11 15:03:18 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
    _name = "Unnamed";
}

Zombie::~Zombie(void) {
    std::std::cout << _name << " has been destroyed" << std::std::endl;
}

void Zombie::announce(void) const{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(std::string name) {
    _name = name;
}

std::string    Zombie::getName(void) {
    return (_name);
}