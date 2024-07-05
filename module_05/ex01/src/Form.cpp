/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:14:29 by biaroun           #+#    #+#             */
/*   Updated: 2024/07/04 17:48:24 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

    Form::Form(void): m_name("Default"), m_sign(false), m_gradetosign(150),  m_gradetoexec(150) {
        std::cout << "Constructor Form: Default" << std::endl;
    }

    Form::Form(std::string const name, int gradetosign, int gradetoexec) {
	    if (gradetosign < 1)
		    throw Form::GradeTooHighException();
	    if (gradetosign > 150)
		    throw Form::GradeTooLowException();
        if (gradetoexec < 1)
		    throw Form::GradeTooHighException();
	    if (gradetoexec > 150)
		    throw Form::GradeTooLowException();
        m_name = name;
        m_sign = false;
        m_gradetosign = gradetosign;
        m_gradetoexec = gradetoexec;
        std::cout << "Constructor Form: " << name << std::endl;
        
    }

    Form::Form(Form const &src) {
        std::cout << "Copy Form: " << src.m_name << std::endl;
        *this = src;
    }

    Form &Form::operator=(Form const &a) {
        std::cout << "Copy Form assignment operator called" << std::endl;
        if (this != &a) {
            m_name  = a.getname();
            m_sign = a.is_signed();     
            m_gradetosign = a.getsigngrade();
            m_gradetoexec = a.getexecgrade();
        }
        return *this;
    }

    Form::~Form(void){
        std::cout << "Destructor Form: " << m_name << std::endl;
    }

/*--------------------------------------------------------------*/

    int Form::getexecgrade(void) const {
        return m_gradetoexec;
    }
    
    int Form::getsigngrade(void) const {
        return m_gradetosign;
    }

    std::string Form::getname(void) const {
        return m_name;
    }
    
    bool Form::is_signed(void) const{
        return m_sign;
    }

    void        Form::beSigned(Bureaucrat const &bureaucrat) {
        if (bureaucrat.getgrade() > m_gradetosign)
            throw Form::GradeTooLowException();
        m_sign = true;
    }

    char const	*Form::GradeTooHighException::what() const throw() { 
        return "Grade is too high"; 
    }

    char const	*Form::GradeTooLowException::what() const throw() { 
        return "Grade is too low"; 
    }
