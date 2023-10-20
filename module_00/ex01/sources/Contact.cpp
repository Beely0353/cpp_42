/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:58:22 by biaroun           #+#    #+#             */
/*   Updated: 2023/10/18 13:45:25 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

void	Contact::setFirstName(string first_name) {
	_FirstName = first_name;
	return;
}

void	Contact::setLastName(string last_name) {
	_LastName = last_name;
	return;
}

void	Contact::setNickName(string nickname) {
	_NickName = nickname;
	return;
}

void	Contact::setPhoneNumber(string phone_number) {
	_PhoneNumber = phone_number;
	return;
}

void	Contact::setDarkestSecret(string darkest_secret) {
	_DarkestSecret = darkest_secret;
	return;
}

void    Contact::setCreationDate() {
    time_t currentTime = time(NULL);

    _CreationDate = currentTime;
}

string	Contact::getFirstName(void) const {
	return _FirstName;
}

string	Contact::getLastName(void) const {
	return _LastName;
}

string Contact::getNickName(void) const {
	return _NickName;
}

string Contact::getPhoneNumber(void) const {
	return _PhoneNumber;
}

string Contact::getDarkestSecret(void) const {
	return _DarkestSecret;
}

time_t Contact::getCreationDate(void) const {
    return _CreationDate;
}