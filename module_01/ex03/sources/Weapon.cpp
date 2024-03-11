/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:29:06 by biaroun           #+#    #+#             */
/*   Updated: 2024/03/11 15:03:01 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon) :_type(weapon) {}
Weapon::~Weapon(void) {}

void    Weapon::setType(std::string type) {
    _type = type;
}

std::string const &Weapon::getType(void) const{
    return (_type);
}