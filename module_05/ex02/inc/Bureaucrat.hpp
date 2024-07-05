/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:12:47 by biaroun           #+#    #+#             */
/*   Updated: 2024/07/05 15:26:42 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <iostream>

class AForm;

class Bureaucrat {
    public:
        Bureaucrat(void);
        Bureaucrat(std::string const name, int grade);
        Bureaucrat(Bureaucrat const &src);
        Bureaucrat &operator=(Bureaucrat const &a);
        ~Bureaucrat(void);

        int getgrade(void) const;
        std::string getname(void) const;
        void gradeinc();
        void gradedec();
        void executeForm(AForm const & form);
        class GradeTooHighException : public std::exception {
            public:
                virtual char const	*what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual char const	*what() const throw();
        };

    private:
        std::string      m_name;
        int              m_grade;
};
