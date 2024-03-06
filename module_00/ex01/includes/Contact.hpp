/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:57:28 by biaroun           #+#    #+#             */
/*   Updated: 2024/03/06 14:30:20 by biaroun          ###   ########.fr       */
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

class Contact {
public:
	Contact(void);
	~Contact(void);

	void	setFirstName(std::string first_name);
	void	setLastName(std::string last_name);
	void	setNickName(std::string nickname);
	void	setPhoneNumber(std::string phone_number);
	void	setDarkestSecret(std::string darkest_secret);
    void	setCreationDate(void);

	std::string	getFirstName(void) const;
	std::string	getLastName(void) const;
	std::string	getNickName(void) const;
	std::string	getPhoneNumber(void) const;
	std::string	getDarkestSecret(void) const;
    time_t getCreationDate(void) const;

private:
	std::string	_FirstName;
	std::string	_LastName;
	std::string	_NickName;
	std::string	_PhoneNumber;
	std::string	_DarkestSecret;
    time_t	_CreationDate;

};
#endif