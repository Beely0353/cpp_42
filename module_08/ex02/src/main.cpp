/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:29:09 by biaroun           #+#    #+#             */
/*   Updated: 2024/09/19 14:35:33 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"

int main() {
    MutantStack<int> ms;

    // Ajout d'éléments
    ms.push(1);
    ms.push(2);
    ms.push(3);

    // Affichage des éléments avec itérateurs
    std::cout << "Elements in MutantStack:" << std::endl;
    for (MutantStack<int>::iterator it = ms.begin(); it != ms.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Affichage des éléments avec itérateurs inversés
    std::cout << "Elements in MutantStack in reverse order:" << std::endl;
    for (MutantStack<int>::reverse_iterator rit = ms.rbegin(); rit != ms.rend(); ++rit) {
        std::cout << *rit << " ";
    }
    std::cout << std::endl;

    // Création d'une copie et affichage
    MutantStack<int> ms_copy(ms);
    std::cout << "Elements in copied MutantStack:" << std::endl;
    for (MutantStack<int>::iterator it = ms_copy.begin(); it != ms_copy.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}

