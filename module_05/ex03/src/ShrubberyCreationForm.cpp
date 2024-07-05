/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 14:26:44 by biaroun           #+#    #+#             */
/*   Updated: 2024/07/05 15:28:39 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

    ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target): AForm(target, 145, 137){
        m_target = target;
    }

    ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy): AForm(copy), m_target(copy.m_target) {
    }

    ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {
        m_target = rhs.m_target;
        return *this;
    }

    ShrubberyCreationForm::~ShrubberyCreationForm() {}

/*------------------------------------------------------------------------------------------------------------*/

    char const	*ShrubberyCreationForm::FailedFileException::what() const throw() { 
        return "Failed creation file"; 
    }

    void ShrubberyCreationForm::execute(Bureaucrat const &bur) const {
        if (is_signed() == false)
            throw AForm::FormUnsignedException();
        else if (getexecgrade() < bur.getgrade())
            throw AForm::GradeTooLowException();

        std::ofstream	file((this->getname() + "_shrubbery").c_str());
        if (file.is_open() == false)
            throw FailedFileException();
        file << "      /\\      " << std::endl;
        file << "     /  \\     " << std::endl;
        file << "    /    \\    " << std::endl;
        file << "   /      \\   " << std::endl;
        file << "  /        \\  " << std::endl;
        file << " /__________\\ " << std::endl;
        file << "      ||      " << std::endl;
        file << "      ||      " << std::endl;
        file << "      ||      " << std::endl;
        file << "      ||      " << std::endl;
        file.close();
    }
