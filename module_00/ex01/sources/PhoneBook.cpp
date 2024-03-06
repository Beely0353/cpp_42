/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:05:51 by biaroun           #+#    #+#             */
/*   Updated: 2024/03/06 14:56:51 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {}

PhoneBook::~PhoneBook(void) {}

void    PhoneBook::setoldestContactIndex(void) {
    if (_nbr_Contact >= 7) {
        if (_oldestContact == 7)
            _oldestContact = 0;
        else 
            _oldestContact++;
    }
    else
        _oldestContact = _nbr_Contact;
}

std::string set_Contact(std::string info) {
    while (1) {
        bool    is_nbr = false;
        std::string  line;
        
        std::cout << BLU << info << END;
        getline(std::cin,line);
		if (std::cin.fail())
			exit(1);
        if (line.empty())
            continue;
        for (size_t i = 0; i < line.length(); i++) {
            if (!isdigit(line.at(i)) && info == "Phone Number: ") {
                std::cout << "Please enter an Phone Number" << std::endl;
                is_nbr = true;
                break;
            }
        }
        if (is_nbr)
            continue;
        return line;
    }
}

void	PhoneBook::add_Contact(void) {
    system("clear");
    std::cout << GRE "Please provide the following contact information" END << std::endl;
    setoldestContactIndex();
    if (_nbr_Contact != 7)
        _nbr_Contact++;
    _directory[_oldestContact].setFirstName(set_Contact("First Name: "));
    _directory[_oldestContact].setLastName(set_Contact("Last Name: "));
    _directory[_oldestContact].setNickName(set_Contact("Nick Name: "));
    _directory[_oldestContact].setPhoneNumber(set_Contact("Phone Number: "));
    _directory[_oldestContact].setDarkestSecret(set_Contact("Darkest Secret: "));
    _directory[_oldestContact].setCreationDate();
}

void    PhoneBook::show_Contact(int i) const {
    std::cout << BLU "First Name: " END <<_directory[i].getFirstName() << std::endl;
    std::cout << BLU "Last Name: " END <<_directory[i].getLastName() << std::endl;
    std::cout << BLU "Nick Name: " END <<_directory[i].getNickName() << std::endl;
    std::cout << BLU "Phone Number: " END <<_directory[i].getPhoneNumber() << std::endl;
    std::cout << BLU "Darkest Secret: " END <<_directory[i].getDarkestSecret() << std::endl;
    
}

std::string getFormattedStr(const std::string& str, size_t i) {
	if (str.length() > i)
		return str.substr(0,i - 3) + "...";
	return str;
}

void    PhoneBook::show_directory() const {
    std::cout << " --------------------------------------------------- " << std::endl;
    std::cout << "|  Index  |  First Name  |  Last Name  |  Nickname  |" << std::endl;
    std::cout << " ---------------------------------------------------" << std::endl;
    for (int i = 0; i + 1 <= _nbr_Contact; i ++) {
        std::cout << "|" << std::right << std::setw(9) << i + 1 << "|";
        std::cout << std::right  << std::setw(14) << getFormattedStr(_directory[i].getFirstName(), 14) << "|";
        std::cout << std::right << std::setw(13) << getFormattedStr(_directory[i].getLastName(), 13) << "|";
        std::cout << std::right << std::setw(12) << getFormattedStr(_directory[i].getNickName(), 12) << "|";
        std::cout << std::endl;
    }
    if (_nbr_Contact >= 7) {
        std::cout << "|" << std::right << std::setw(9) << 8 << "|";
        std::cout << std::right  << std::setw(14) << getFormattedStr(_directory[7].getFirstName(), 14) << "|";
        std::cout << std::right << std::setw(13) << getFormattedStr(_directory[7].getLastName(), 13) << "|";
        std::cout << std::right << std::setw(12) << getFormattedStr(_directory[7].getNickName(), 12) << "|";
        std::cout << std::endl;
    }
    std::cout << " ---------------------------------------------------" << std::endl;
}

void    PhoneBook::search_Contact(void) const {
    system("clear");
    if (_nbr_Contact == 0) {
        std::cout << RED "No saved contacts found" END << std::endl;
        return ;
    }
    show_directory();
    while (1) {
		std::string	index;
        bool k = false;
    
		std::cout << GRE "Enter the contact index (1-8): " END;
		getline(std::cin, index);
		if (std::cin.fail())
			exit(1);
        for (size_t j = 0; j < index.length(); j++) {
            if (!isdigit(index.at(j))) {
                k = true;
                break;
            }
        }
        int i = atoi(index.c_str());
        if (i < 1 || i > 8 || k) {
            std::cout << RED "Contact index must be between 1 and 8." END << std::endl;
            continue;
        }
        if (i - 1 > _nbr_Contact) {
            std::cout << RED "Contact does not exist." END << std::endl;
            continue;
        }
        show_Contact(i - 1);
        break;
    }
    return ;
}

void PhoneBook::settest(void) {
    std::string c = "a";
    _nbr_Contact = 7;
    _oldestContact = 7;
	for (int i = 0; i < 8; i++) {
		_directory[i].setFirstName(c);
		_directory[i].setLastName(c);
		_directory[i].setNickName(c);
		_directory[i].setPhoneNumber(c);
		_directory[i].setDarkestSecret(c);
		c.at(0)++;
	}
}