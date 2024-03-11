/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:29:09 by biaroun           #+#    #+#             */
/*   Updated: 2024/03/11 15:05:09 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon {
public:
    Weapon(std::string weapon);
    ~Weapon(void);

    void            setType(std::string type);
    std::string const	&getType(void) const;


private:
    std::string  _type;

};

#endif