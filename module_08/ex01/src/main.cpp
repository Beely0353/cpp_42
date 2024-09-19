/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:07:53 by biaroun           #+#    #+#             */
/*   Updated: 2024/09/19 14:15:13 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>   // Pour rand() et srand()
#include <ctime>     // Pour time()
#include "Span.hpp"

int main() {
    // Initialiser la graine pour le générateur de nombres aléatoires
    std::srand(static_cast<unsigned int>(std::time(0)));
    
    // Test avec 10 000 nombres aléatoires
    try {
        Span spanTest(10000);
        
        for (int i = 0; i < 10000; ++i) {
            spanTest.addNumber(std::rand() % 1000000); // Nombres entre 0 et 1 000 000
        }

        // Afficher les résultats pour longestSpan et shortestSpan
        std::cout << "Longest span: " << spanTest.longestSpan() << std::endl;
        std::cout << "Shortest span: " << spanTest.shortestSpan() << std::endl;
    }
    catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    // Test de la gestion des exceptions (capacité atteinte)
    try {
        Span smallSpan(3);
        smallSpan.addNumber(10);
        smallSpan.addNumber(20);
        smallSpan.addNumber(30);
        smallSpan.addNumber(40); // Devrait générer une exception
    }
    catch (const std::exception &e) {
        std::cerr << "Exception attrapée (test de capacité) : " << e.what() << std::endl;
    }

    // Test de la gestion des exceptions (pas assez de nombres pour calculer un écart)
    try {
        Span emptySpan(5);
        emptySpan.addNumber(10);

        // Essayer de calculer shortestSpan ou longestSpan avec un seul nombre
        std::cout << "Shortest span (vide) : " << emptySpan.shortestSpan() << std::endl;
    }
    catch (const std::exception &e) {
        std::cerr << "Exception attrapée (pas assez de nombres) : " << e.what() << std::endl;
    }

    // Test avec des nombres en doublon pour voir comment shortestSpan se comporte
    try {
        Span duplicateSpan(5);
        duplicateSpan.addNumber(100);
        duplicateSpan.addNumber(100);
        duplicateSpan.addNumber(100);
        duplicateSpan.addNumber(200);
        duplicateSpan.addNumber(200);

        // Résultats attendus : Longest span = 100, Shortest span = 0
        std::cout << "Longest span (doublons) : " << duplicateSpan.longestSpan() << std::endl;
        std::cout << "Shortest span (doublons) : " << duplicateSpan.shortestSpan() << std::endl;
    }
    catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}


/*int main() {
    Span sp = Span(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    return 0;
}*/
