/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:29:51 by biaroun           #+#    #+#             */
/*   Updated: 2023/10/24 19:15:33 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB {
public:
    HumanB(string name);
    ~HumanB(void);

    void    setWeapon(Weapon &weapon);
    void    attack(void) const;


private:
    string  _name;
    Weapon  *_weapon;

};

#endif