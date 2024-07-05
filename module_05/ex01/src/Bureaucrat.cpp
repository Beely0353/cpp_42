/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:13:03 by biaroun           #+#    #+#             */
/*   Updated: 2024/07/04 17:23:06 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

    Bureaucrat::Bureaucrat(void): m_name("Default"), m_grade(150) {
        std::cout << "Constructor Bureaucrat: Default" << std::endl;
    }

    Bureaucrat::Bureaucrat(std::string const name, int grade) {
	    if (grade < 1)
		    throw Bureaucrat::GradeTooHighException();
	    if (grade > 150)
		    throw Bureaucrat::GradeTooLowException();
        m_name = name;
        m_grade = grade;
        std::cout << "Constructor Bureaucrat: " << name << std::endl;
    }

    Bureaucrat::Bureaucrat(Bureaucrat const &src) {
        std::cout << "Copy Bureaucrat: " << src.m_name << std::endl;
        *this = src;
    }

    Bureaucrat &Bureaucrat::operator=(Bureaucrat const &a) {
        std::cout << "Copy Bureaucrat assignment operator called" << std::endl;
        if (this != &a) {
            m_grade = a.getgrade();
            m_name  = a.getname();
        }
        return *this;
    }

    Bureaucrat::~Bureaucrat(void){
        std::cout << "Destructor Bureaucrat: " << m_name << std::endl;
    }

/*--------------------------------------------------------------*/

    int Bureaucrat::getgrade() const {
        return (m_grade);
    }

    std::string Bureaucrat::getname(void) const {
        return m_name;
    }

    void Bureaucrat::gradeinc() {
	    if (m_grade - 1 < 1)
		    throw Bureaucrat::GradeTooHighException();
        m_grade--;
    }

    void Bureaucrat::gradedec() {
	    if (m_grade + 1 > 150)
		    throw Bureaucrat::GradeTooLowException();
        m_grade++;
    }

    char const	*Bureaucrat::GradeTooHighException::what() const throw() { 
        return "Grade is too high"; 
    }

    char const	*Bureaucrat::GradeTooLowException::what() const throw() { 
        return "Grade is too low"; 
    }
