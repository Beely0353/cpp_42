/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 14:21:15 by biaroun           #+#    #+#             */
/*   Updated: 2024/07/05 15:29:08 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib> 
#include <ctime>

    RobotomyRequestForm::RobotomyRequestForm(std::string const &target): AForm(target, 75, 45){
        m_target = target;
    }

    RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy): AForm(copy), m_target(copy.m_target) {
    }
    RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) {
        m_target = rhs.m_target;
        return *this;
    }

    RobotomyRequestForm::~RobotomyRequestForm() {}

/*------------------------------------------------------------------------------------------------------------*/


    void RobotomyRequestForm::execute(Bureaucrat const &bur) const {
        if (is_signed() == false)
            throw AForm::FormUnsignedException();
        else if (getexecgrade() < bur.getgrade())
            throw AForm::GradeTooLowException();

        srand(time(NULL));
        if (rand() % 2)
            std::cout << m_target << ": •`_´•" << std::endl;
        else
            std::cout << m_target << ": •`‿´•" << std::endl;
    }
