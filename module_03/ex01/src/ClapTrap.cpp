/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 11:44:33 by biaroun           #+#    #+#             */
/*   Updated: 2024/06/05 16:56:49 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

/*-----------------------*/

ClapTrap::ClapTrap(void): m_name("Default"), m_hit(10), m_energy(10), m_dmg(0) {
    std::cout << "Constructor ClapTrap: Default" << std::endl;
}

ClapTrap::ClapTrap(std::string name): m_name(name), m_hit(10), m_energy(10), m_dmg(0) {
    std::cout << "Constructor ClapTrap: " << name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src) {
    std::cout << "Copy ClapTrap: " << src.m_name << " -> " << m_name << std::endl;
    *this = src;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &a) {
	std::cout << "Copy assignment operator called" << std::endl;
    m_name = a.getName();
    m_hit  = a.getHitPoints();
    m_energy = a.getEnergyPoints();
    m_dmg    = a.getAttackDmg();

	return *this;
}

ClapTrap::~ClapTrap(void) {
    std::cout << "Destructor ClapTrap: " << m_name << std::endl;
}

/*-----------------------*/

std::string    ClapTrap::getName(void) const{
    return (m_name);
}

unsigned int    ClapTrap::getHitPoints(void) const{
    return (m_hit);
}

unsigned int    ClapTrap::getEnergyPoints(void) const{
    return (m_energy);
}

unsigned int    ClapTrap::getAttackDmg(void) const{
    return (m_dmg);
}

/*-----------------------*/

void ClapTrap::attack(const std::string& target) {
    if (m_energy == 0 || m_hit == 0) {
        std::cout << "ClapTrap: " <<  m_name << " ne peut pas faire d'action car il a 0 HitPoint ou EnergyPoint" << std::endl;
        return;
    }
    std::cout << "ClapTrap: " << m_name << " attaque " << target << " lui infligeant " << m_dmg << " degat(s)" << std::endl;
    m_energy -= 1;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (m_energy == 0 || m_hit == 0) {
        std::cout << "ClapTrap: " << m_name << " ne peut pas faire d'action car il a 0 HitPoint ou EnergyPoint" << std::endl;
        return;
    }
    if (m_hit >= amount) {
        m_hit -= amount;
        std::cout << "ClapTrap: " << m_name << " perd " << amount << " HitPoint(s), il lui reste " << m_hit << " HitPoint(s)" << std::endl;
    } else {
        m_hit = 0;
        std::cout << "ClapTrap: " << m_name << " tombe a 0 Hitpoint" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (m_energy == 0 || m_hit == 0) {
        std::cout << "ClapTrap: " << m_name << " ne peut pas faire d'action car il a 0 HitPoint ou EnergyPoint" << std::endl;
        return;
    }
    m_hit += amount;
    std::cout << "ClapTrap: " << m_name << " se soigne de " << amount << " Hitpoint(s)" << std::endl;
    m_energy -= 1;
}
