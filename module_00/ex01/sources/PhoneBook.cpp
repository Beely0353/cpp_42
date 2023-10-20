/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:05:51 by biaroun           #+#    #+#             */
/*   Updated: 2023/10/20 13:10:22 by biaroun          ###   ########.fr       */
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

string set_Contact(string info) {
    while (1) {
        bool    is_nbr = false;
        string  line;
        
        cout << BLU << info << END;
        getline(cin,line);
        if (line.empty())
            continue;
        for (size_t i = 0; i < line.length(); i++) {
            if (!isdigit(line.at(i)) && info == "Phone Number: ") {
                cout << "Please enter an Phone Number" << endl;
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
    cout << GRE "Please provide the following contact information" END << endl;
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
    cout << BLU "First Name: " END <<_directory[i].getFirstName() << endl;
    cout << BLU "Last Name: " END <<_directory[i].getLastName() << endl;
    cout << BLU "Nick Name: " END <<_directory[i].getNickName() << endl;
    cout << BLU "Phone Number: " END <<_directory[i].getPhoneNumber() << endl;
    cout << BLU "Darkest Secret: " END <<_directory[i].getDarkestSecret() << endl;
    
}

string getFormattedStr(const string& str, size_t i) {
	if (str.length() > i)
		return str.substr(0,i - 3) + "...";
	return str;
}

void    PhoneBook::show_directory() const {
    cout << " --------------------------------------------------- " << endl;
    cout << "|  Index  |  First Name  |  Last Name  |  Nickname  |" << endl;
    cout << " ---------------------------------------------------" << endl;

	for (int i = 0; i <= _nbr_Contact; i ++)
	{
        cout << "|" << right << setw(9) << i + 1 << "|";
        cout << right  << setw(14) << getFormattedStr(_directory[i].getFirstName(), 14) << "|";
        cout << right << setw(13) << getFormattedStr(_directory[i].getLastName(), 13) << "|";
        cout << right << setw(12) << getFormattedStr(_directory[i].getNickName(), 12) << "|";
        cout << endl;
    }
    cout << " ---------------------------------------------------" << endl;
}

void    PhoneBook::search_Contact(void) const {
    system("clear");
    if (_nbr_Contact == 0) {
        cout << RED "No saved contacts found" END << endl;
        return ;
    }
    show_directory();
    while (1) {
		string	index;
        bool k = false;
    
		cout << GRE "Enter the contact index (1-8): " END;
		getline(cin, index);
        for (size_t j = 0; j < index.length(); j++) {
            if (!isdigit(index.at(j))) {
                k = true;
                break;
            }
        }
        int i = atoi(index.c_str());
        if (i < 1 || i > 8 || k) {
            cout << RED "Contact index must be between 1 and 8." END << endl;
            continue;
        }
        if (i - 1 > _nbr_Contact) {
            cout << RED "Contact does not exist." END << endl;
            continue;
        }
        show_Contact(i - 1);
        break;
    }
    return ;
}

void PhoneBook::settest(void) {
    string c = "a";
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