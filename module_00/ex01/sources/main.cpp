/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:05:40 by biaroun           #+#    #+#             */
/*   Updated: 2024/03/06 14:57:37 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main( void ) {
	PhoneBook	phonebook;

	std::cout <<     " ___________________________________________________\n"
				"|  _______________________________________________  |\n"
				"                         | |\n"
				"                      PhoneBook\n"
				"                       Biaroun\n"
				"                         | |\n"
				"| |_______________________________________________| |\n"
				"|___________________________________________________|\n" << std::endl;
    phonebook._nbr_Contact = 0;
	//phonebook.settest();
	while (1) {
		std::string	command;
        std::cout << GRE "Enter a command (ADD, SEARCH, EXIT): " END;
        getline(std::cin, command);
		if (std::cin.fail())
			exit(1);
        if (command == "ADD")
            phonebook.add_Contact();
        else if (command == "SEARCH")
            phonebook.search_Contact();
        else if (command == "EXIT")
            break;
        else
            std::cout << RED "Command not found" END << std::endl;
	}
	return 0;
}