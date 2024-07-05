/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 14:12:49 by biaroun           #+#    #+#             */
/*   Updated: 2024/07/05 15:28:17 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

    PresidentialPardonForm::PresidentialPardonForm(std::string const &target): AForm(target, 25, 5){
        m_target = target;
    }

    PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy): AForm(copy), m_target(copy.m_target) {
    }

    PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) {
        m_target = rhs.m_target;
        return *this;
    }

    PresidentialPardonForm::~PresidentialPardonForm() {}

/*------------------------------------------------------------------------------------------------------------*/


    void PresidentialPardonForm::execute(Bureaucrat const &bur) const {
        if (is_signed() == false)
            throw AForm::FormUnsignedException();
        else if (getexecgrade() < bur.getgrade())
            throw AForm::GradeTooLowException();
        std::cout << m_target << ": Its ok ^_^" << std::endl;
    }
