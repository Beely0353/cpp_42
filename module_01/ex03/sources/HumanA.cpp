/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:29:36 by biaroun           #+#    #+#             */
/*   Updated: 2024/03/11 15:16:42 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name) ,_weapon(weapon) {}
HumanA::~HumanA(void) {}

void    HumanA::attack(void) const{
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
