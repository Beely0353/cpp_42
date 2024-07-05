/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 18:02:25 by biaroun           #+#    #+#             */
/*   Updated: 2024/07/04 18:04:15 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

    AForm::AForm(void): m_name("Default"), m_sign(false), m_gradetosign(150),  m_gradetoexec(150) {
        std::cout << "Constructor AForm: Default" << std::endl;
    }

    AForm::AForm(std::string const name, int gradetosign, int gradetoexec) {
	    if (gradetosign < 1)
		    throw AForm::GradeTooHighException();
	    if (gradetosign > 150)
		    throw AForm::GradeTooLowException();
        if (gradetoexec < 1)
		    throw AForm::GradeTooHighException();
	    if (gradetoexec > 150)
		    throw AForm::GradeTooLowException();
        m_name = name;
        m_sign = false;
        m_gradetosign = gradetosign;
        m_gradetoexec = gradetoexec;
        std::cout << "Constructor AForm: " << name << std::endl;
        
    }

    AForm::AForm(AForm const &src) {
        std::cout << "Copy AForm: " << src.m_name << std::endl;
        *this = src;
    }

    AForm &AForm::operator=(AForm const &a) {
        std::cout << "Copy AForm assignment operator called" << std::endl;
        if (this != &a) {
            m_name  = a.getname();
            m_sign = a.is_signed();     
            m_gradetosign = a.getsigngrade();
            m_gradetoexec = a.getexecgrade();
        }
        return *this;
    }

    AForm::~AForm(void){
        std::cout << "Destructor AForm: " << m_name << std::endl;
    }

/*--------------------------------------------------------------*/

    int AForm::getexecgrade(void) const {
        return m_gradetoexec;
    }
    
    int AForm::getsigngrade(void) const {
        return m_gradetosign;
    }

    std::string AForm::getname(void) const {
        return m_name;
    }
    
    bool AForm::is_signed(void) const{
        return m_sign;
    }

    void        AForm::beSigned(Bureaucrat const &bureaucrat) {
        if (bureaucrat.getgrade() > m_gradetosign)
            throw AForm::GradeTooLowException();
        m_sign = true;
    }

    char const	*AForm::GradeTooHighException::what() const throw() { 
        return "Grade is too high"; 
    }

    char const	*AForm::GradeTooLowException::what() const throw() { 
        return "Grade is too low"; 
    }

    char const	*AForm::FormUnsignedException::what() const throw() { 
        return "Form is unsigned";
    }
