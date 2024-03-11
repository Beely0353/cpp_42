/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:29:58 by biaroun           #+#    #+#             */
/*   Updated: 2024/03/11 15:03:18 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
    _weapon = NULL;
}
HumanB::~HumanB(void) {}

void    HumanB::setWeapon(Weapon &weapon) {
    _weapon = &weapon;
}

void    HumanB::attack(void) const{
	if (_weapon) {
		std::std::cout << _name << " attacks with their " << _weapon->getType() << std::std::endl;
	} else {
		std::std::cout << _name << " attacks with their hand" << std::std::endl;
	}
}