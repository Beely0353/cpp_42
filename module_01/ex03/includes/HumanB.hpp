/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:29:51 by biaroun           #+#    #+#             */
/*   Updated: 2024/03/11 15:03:01 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB {
public:
    HumanB(std::string name);
    ~HumanB(void);

    void    setWeapon(Weapon &weapon);
    void    attack(void) const;


private:
    std::string  _name;
    Weapon  *_weapon;

};

#endif