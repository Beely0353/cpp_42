/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:29:27 by biaroun           #+#    #+#             */
/*   Updated: 2023/10/20 16:09:56 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA {
public:
    HumanA(string name, Weapon &weapon);
    ~HumanA(void);
    
    void    attack(void) const;


private:
    string  _name;
    Weapon  &_weapon;

};

#endif
