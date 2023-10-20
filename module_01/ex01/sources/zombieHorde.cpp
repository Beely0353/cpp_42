/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:31:57 by biaroun           #+#    #+#             */
/*   Updated: 2023/10/20 14:49:06 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, string name ) {
    Zombie *Horde = new Zombie[N];

    for (int i = 0; i < N; i++) {
        Horde[i].setName(name);
    }
    return (Horde);
}