/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:40:20 by biaroun           #+#    #+#             */
/*   Updated: 2024/04/11 13:11:55 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

/*-----------------------*/

ScavTrap::ScavTrap(void) {
    m_hit = 100;
    m_energy = 50; 
    m_dmg = 20;
    std::cout << "Init ScavTrap: Default" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
    m_name = name;
    m_hit = 100;
    m_energy = 50; 
    m_dmg = 20;
    std::cout << "Init ScavTrap: " << name << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src): ClapTrap(src){
    std::cout << "Copy ScavTrap: " << src.m_name << " -> " << m_name << std::endl;
    *this = src;
}

ScavTrap::~ScavTrap(void) {
    std::cout << "Destructor ScavTrap: " << this->m_name << std::endl;
}

/*-----------------------*/

void ScavTrap::attack(const std::string& target) {
    if (m_energy == 0 || m_hit == 0) {
        std::cout << "ScavTrap: " << m_name << " ne peut pas faire d'action car il a 0 HitPoint ou EnergyPoint" << std::endl;
        return;
    }
    std::cout << "ScavTrap: " << m_name << " attaque " << target << " lui infligeant " << m_dmg << " degat(s)" << std::endl;
    m_energy -= 1;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->getName() << " est maintenant en Keeper Mode." << std::endl;
    m_energy--;
}

