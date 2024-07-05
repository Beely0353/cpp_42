/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 15:36:36 by biaroun           #+#    #+#             */
/*   Updated: 2024/07/05 15:58:58 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
    public:
        Intern(void);
        Intern(Intern const &cpy);
        Intern &operator=(Intern const &rhs);
        ~Intern(void);

        AForm *makeForm(std::string const &formname, std::string const &target);
        class NotFoundFormException : public std::exception {
            public:
                virtual char const *what() const throw();
        };
};
