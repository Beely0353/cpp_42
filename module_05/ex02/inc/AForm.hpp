/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 18:01:38 by biaroun           #+#    #+#             */
/*   Updated: 2024/07/05 17:16:03 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include <string> 

class Bureaucrat;

class AForm {
    public:
        AForm(void);
        AForm(std::string const name, int gradetosign, int gradetoexec);
        AForm(AForm const &src);
        AForm &operator=(AForm const &a);
        virtual ~AForm(void);

        int getexecgrade(void) const;
        int getsigngrade(void) const;
        std::string getname(void) const;
        bool        is_signed(void) const;
        void        beSigned(Bureaucrat const &bureaucrat);
        virtual void	execute(Bureaucrat const &bureaucrat) const = 0;

        class GradeTooHighException : public std::exception {
            public:
                virtual char const	*what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual char const	*what() const throw();
        };
        class FormUnsignedException : public std::exception {
            public:
                virtual char const *what() const throw();
        };

    private:
        std::string m_name;
        bool        m_sign;
        int         m_gradetosign;
        int         m_gradetoexec;
};
