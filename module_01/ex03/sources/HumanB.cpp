/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:29:58 by biaroun           #+#    #+#             */
/*   Updated: 2023/10/26 12:42:28 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(string name) : _name(name) {
    _weapon = NULL;
}
HumanB::~HumanB(void) {}

void    HumanB::setWeapon(Weapon &weapon) {
    _weapon = &weapon;
}

void    HumanB::attack(void) const{
	if (_weapon) {
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	} else {
		std::cout << _name << " attacks with their hand" << std::endl;
	}
}