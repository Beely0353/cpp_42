/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:33:22 by biaroun           #+#    #+#             */
/*   Updated: 2024/03/11 15:05:58 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {
public:
    Zombie(void);
	~Zombie(void);

    void announce(void) const;

    void    setName(std::string name);
    std::string  getName(void);


private:
    std::string  _name;

};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif