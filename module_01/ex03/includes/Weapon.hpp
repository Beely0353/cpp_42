/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:29:09 by biaroun           #+#    #+#             */
/*   Updated: 2023/10/24 19:18:30 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

using namespace std;

class Weapon {
public:
    Weapon(string weapon);
    ~Weapon(void);

    void            setType(string type);
    string const	&getType(void) const;


private:
    string  _type;

};

#endif