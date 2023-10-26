/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:29:06 by biaroun           #+#    #+#             */
/*   Updated: 2023/10/24 19:18:18 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(string weapon) :_type(weapon) {}
Weapon::~Weapon(void) {}

void    Weapon::setType(string type) {
    _type = type;
}

string const &Weapon::getType(void) const{
    return (_type);
}