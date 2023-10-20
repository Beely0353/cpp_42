/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:51:12 by biaroun           #+#    #+#             */
/*   Updated: 2023/10/20 14:30:23 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    //tas
    Zombie* ZombiePtr = newZombie("Sion");
    ZombiePtr->announce();
    ZombiePtr->setName("Nois");
    ZombiePtr->announce();
    
    //pile
    randomChump("Brand");

    delete(ZombiePtr);

    return 0;
}