/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:14:26 by biaroun           #+#    #+#             */
/*   Updated: 2024/07/04 17:35:19 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Form {
    public:
        Form(void);
        Form(std::string const name, int gradetosign, int gradetoexec);
        Form(Form const &src);
        Form &operator=(Form const &a);
        ~Form(void);

        int getexecgrade(void) const;
        int getsigngrade(void) const;
        std::string getname(void) const;
        bool        is_signed(void) const;
        void        beSigned(Bureaucrat const &bureaucrat);
        class GradeTooHighException : public std::exception {
            public:
                virtual char const	*what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual char const	*what() const throw();
        };

    private:
        std::string m_name;
        bool        m_sign;
        int         m_gradetosign;
        int         m_gradetoexec;
};
