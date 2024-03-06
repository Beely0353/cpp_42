/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:58:22 by biaroun           #+#    #+#             */
/*   Updated: 2024/03/06 14:27:08 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

void	Contact::setFirstName(std::string first_name) {
	_FirstName = first_name;
	return;
}

void	Contact::setLastName(std::string last_name) {
	_LastName = last_name;
	return;
}

void	Contact::setNickName(std::string nickname) {
	_NickName = nickname;
	return;
}

void	Contact::setPhoneNumber(std::string phone_number) {
	_PhoneNumber = phone_number;
	return;
}

void	Contact::setDarkestSecret(std::string darkest_secret) {
	_DarkestSecret = darkest_secret;
	return;
}

void    Contact::setCreationDate() {
    time_t currentTime = time(NULL);

    _CreationDate = currentTime;
}

std::string	Contact::getFirstName(void) const {
	return _FirstName;
}

std::string	Contact::getLastName(void) const {
	return _LastName;
}

std::string Contact::getNickName(void) const {
	return _NickName;
}

std::string Contact::getPhoneNumber(void) const {
	return _PhoneNumber;
}

std::string Contact::getDarkestSecret(void) const {
	return _DarkestSecret;
}

time_t Contact::getCreationDate(void) const {
    return _CreationDate;
}