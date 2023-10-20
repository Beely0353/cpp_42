/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:57:28 by biaroun           #+#    #+#             */
/*   Updated: 2023/10/20 12:53:23 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <cctype>
# include <ctime>
# include <cstdlib>
# include <iomanip>  

# define RED "\033[38;5;204m"
# define BLU "\033[38;5;32m"
# define GRE "\033[38;5;80m"
# define YEL "\033[38;5;184m"
# define END "\033[0m"

using namespace std;

class Contact {
public:
	Contact(void);
	~Contact(void);

	void	setFirstName(string first_name);
	void	setLastName(string last_name);
	void	setNickName(string nickname);
	void	setPhoneNumber(string phone_number);
	void	setDarkestSecret(string darkest_secret);
    void	setCreationDate(void);

	string	getFirstName(void) const;
	string	getLastName(void) const;
	string	getNickName(void) const;
	string	getPhoneNumber(void) const;
	string	getDarkestSecret(void) const;
    time_t getCreationDate(void) const;

private:
	string	_FirstName;
	string	_LastName;
	string	_NickName;
	string	_PhoneNumber;
	string	_DarkestSecret;
    time_t	_CreationDate;

};
#endif