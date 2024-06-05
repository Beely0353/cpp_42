/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:35:13 by biaroun           #+#    #+#             */
/*   Updated: 2024/06/05 17:02:24 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>


class ClapTrap {
    public:
        ClapTrap(void);
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &src);
        ClapTrap &operator=(ClapTrap const &a);
        ~ClapTrap(void);

        std::string     getName(void) const;
        unsigned int    getHitPoints(void) const;
        unsigned int    getEnergyPoints(void) const;
        unsigned int    getAttackDmg(void) const;

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

    protected:
        std::string          m_name;
        unsigned int         m_hit;
        unsigned int         m_energy;
        unsigned int         m_dmg;
};

#endif