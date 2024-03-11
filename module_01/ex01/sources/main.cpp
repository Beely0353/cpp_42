/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:51:12 by biaroun           #+#    #+#             */
/*   Updated: 2024/03/11 15:03:01 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    int N = 5;
    Zombie *Horde = zombieHorde(N, "Sion");
    std::string name;

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