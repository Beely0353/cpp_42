/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:53:42 by biaroun           #+#    #+#             */
/*   Updated: 2024/03/11 16:00:17 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {

    Harl Harl;
    std::string chosenLevel;

    while (1) {
        std::cout << BEI <<"Choose a level of complain: " EOC;
	    std::getline(std::cin, chosenLevel);
        if (std::cin.fail())
            exit(1);
        Harl.complain(chosenLevel);
    }
}