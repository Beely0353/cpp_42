/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:33:22 by biaroun           #+#    #+#             */
/*   Updated: 2023/10/20 14:33:45 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>


using namespace std;

class Zombie {
public:
    Zombie(void);
	~Zombie(void);

    void announce(void) const;

    void    setName(string name);
    string  getName(void);


private:
    string  _name;

};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif