/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 15:36:48 by biaroun           #+#    #+#             */
/*   Updated: 2024/07/05 15:57:59 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

    #include "Intern.hpp"

    Intern::Intern(void) {
        std::cout << "Intern Default Constructor called" << std::endl;
    }
    
    Intern::Intern(Intern const &cpy) {
        std::cout << "Intern Copy Constructor called" << std::endl;
        *this = cpy;
    }

    Intern &Intern::operator=(Intern const &rhs) {
        std::cout << "Intern Assignation operator called" << std::endl;
        if (this == &rhs)
            return *this;
        return *this;
    }

    Intern::~Intern(void) {
        
    }
    
/******************************************************************************************************** */


    static AForm	*President(const std::string target){
        return (new PresidentialPardonForm(target));
    }

    static AForm	*Robot(const std::string target){
        return (new RobotomyRequestForm(target));
    }

    static AForm	*Shrubbery(const std::string target){
        return (new ShrubberyCreationForm(target));
    }

    AForm *Intern::makeForm(std::string const &formname, std::string const &target) {
        AForm *(*all_forms[])(const std::string target) = {&President, &Robot, &Shrubbery};
        std::string forms[] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
        
        for (int i = 0; i < 3; i++) {
            if(formname == forms[i]) {
                std::cout << "Intern creates " << formname << std::endl;
                return (all_forms[i](target));
            }
        }
        std::cout << "Intern can't create a form: " << formname << std::endl;
        return (NULL);
    }
