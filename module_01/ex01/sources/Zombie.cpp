/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:51:25 by biaroun           #+#    #+#             */
/*   Updated: 2023/10/20 14:24:34 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
    _name = "Unnamed";
}

Zombie::~Zombie(void) {
    std::cout << _name << " has been destroyed" << std::endl;
}

void Zombie::announce(void) const{
    cout << _name << ": BraiiiiiiinnnzzzZ..." << endl;
}

void    Zombie::setName(string name) {
    _name = name;
}

string    Zombie::getName(void) {
    return (_name);
}