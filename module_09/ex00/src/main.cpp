/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 17:31:34 by biaroun           #+#    #+#             */
/*   Updated: 2024/12/30 17:32:11 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char* argv[]) {
    // Vérifier si le nombre d'arguments est correct
    if (argc != 2) {
        std::cerr << "Usage: ./btc <input_file>" << std::endl;
        return EXIT_FAILURE;
    }

    try {
        // Création de l'instance de BitcoinExchange
        BitcoinExchange exchange;

        // Charger la base de données
        const std::string databaseFile = "data.csv";
        exchange.setDataBase(databaseFile);

        // Traiter le fichier d'entrée
        const std::string inputFile = argv[1];
        exchange.setInput(inputFile);
    }
    catch (const std::exception& e) {
        // Gestion des exceptions
        std::cerr << "Error: " << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}

