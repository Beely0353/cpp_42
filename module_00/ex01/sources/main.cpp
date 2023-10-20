/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:05:40 by biaroun           #+#    #+#             */
/*   Updated: 2023/10/20 13:09:17 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main( void ) {
	PhoneBook	phonebook;

	cout <<     " ___________________________________________________\n"
				"|  _______________________________________________  |\n"
				"                         | |\n"
				"                      PhoneBook\n"
				"                       Biaroun\n"
				"                         | |\n"
				"| |_______________________________________________| |\n"
				"|___________________________________________________|\n" << endl;
    phonebook._nbr_Contact = 0;
	phonebook.settest();
	while (1) {
		string	command;
        cout << GRE "Enter a command (ADD, SEARCH, EXIT): " END;
        getline(cin, command);
        if (command == "ADD")
            phonebook.add_Contact();
        else if (command == "SEARCH")
            phonebook.search_Contact();
        else if (command == "EXIT")
            break;
        else
            cout << RED "Command not found" END << endl;
	}
	return 0;
}