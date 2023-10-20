/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:51:12 by biaroun           #+#    #+#             */
/*   Updated: 2023/10/20 15:11:21 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    int N = 5;
    Zombie *Horde = zombieHorde(N, "Sion");
    string name;

    for (int i = 0; i < N; i++) {
        Horde[i].announce();
    }
    for (int i = 0; i < N; i++) {
        Horde[i].setName("Nois");
    }
    for (int i = 0; i < N; i++) {
        Horde[i].announce();
    }
    delete[] (Horde);

    return 0;
}