/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:05:25 by biaroun           #+#    #+#             */
/*   Updated: 2023/10/20 12:41:31 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

# define MAX_column 10
# define MAX_contact 8

class PhoneBook {
public:
	PhoneBook(void);
	~PhoneBook(void);

    int     _nbr_Contact;

    void	add_Contact(void);
    void    search_Contact(void) const;
    void    settest(void);
    
private:
    Contact _directory[MAX_contact];
    int     _oldestContact;

    void    setoldestContactIndex();
    void    show_directory() const;
    void    show_Contact(int i) const;
};
#endif