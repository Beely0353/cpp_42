/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:05:07 by biaroun           #+#    #+#             */
/*   Updated: 2024/04/11 13:10:47 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

/*-----------------------*/

FragTrap::FragTrap(void) {
    m_hit = 100;
    m_energy = 50; 
    m_dmg = 20;
    std::cout << "Init FragTrap: Default" << std::endl;
}

FragTrap::FragTrap(std::string name) {
    m_name = name;
    m_hit = 100;
    m_energy = 100; 
    m_dmg = 30;
    std::cout << "Init FragTrap: " << name << std::endl;
}

FragTrap::FragTrap(FragTrap const &src): ClapTrap(src){
    std::cout << "Copy FragTrap: " << src.m_name << " -> " << m_name << std::endl;
    *this = src;
}

FragTrap::~FragTrap(void) {
    std::cout << "Destructor FragTrap: " << this->m_name << std::endl;
}

/*-----------------------*/

void FragTrap::attack(const std::string& target) {
    if (m_energy == 0 || m_hit == 0) {
        std::cout << "FragTrap: " << m_name << " ne peut pas faire d'action car il a 0 HitPoint ou EnergyPoint" << std::endl;
        return;
    }
    std::cout << "FragTrap: " << m_name << " attaque " << target << " lui infligeant " << m_dmg << " degat(s)" << std::endl;
    m_energy -= 1;
}

void FragTrap::highFivesGuys(void) {
    if (m_energy == 0 || m_hit == 0) {
        std::cout << "FragTrap: " << m_name << " ne peut pas faire d'action car il a 0 HitPoint ou EnergyPoint" << std::endl;
        return;
    }
    std::cout << "FragTrap: " << m_name << " utilise son ultime: highFives" << std::endl;
    m_energy--;
}

