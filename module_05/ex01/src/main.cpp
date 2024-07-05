/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:50:05 by biaroun           #+#    #+#             */
/*   Updated: 2024/07/04 17:39:17 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        // Test du constructeur par défaut de Form
        Form f1;
        std::cout << f1.getname() << " form, sign grade: " << f1.getsigngrade()
                  << ", exec grade: " << f1.getexecgrade() << ", is signed: " << f1.is_signed() << std::endl;

        // Test du constructeur avec paramètres de Form
        Form f2("TopSecret", 50, 25);
        std::cout << f2.getname() << " form, sign grade: " << f2.getsigngrade()
                  << ", exec grade: " << f2.getexecgrade() << ", is signed: " << f2.is_signed() << std::endl;

        // Test du constructeur par copie de Form
        Form f3(f2);
        std::cout << f3.getname() << " form, sign grade: " << f3.getsigngrade()
                  << ", exec grade: " << f3.getexecgrade() << ", is signed: " << f3.is_signed() << std::endl;

        // Test de l'opérateur d'affectation de Form
        Form f4;
        f4 = f2;
        std::cout << f4.getname() << " form, sign grade: " << f4.getsigngrade()
                  << ", exec grade: " << f4.getexecgrade() << ", is signed: " << f4.is_signed() << std::endl;

        // Création de bureaucrates
        Bureaucrat b1("Alice", 45);
        Bureaucrat b2("Bob", 55);

        // Test de la signature de formulaires
        std::cout << "Trying to sign form " << f2.getname() << " with " << b1.getname() << std::endl;
        f2.beSigned(b1);
        std::cout << f2.getname() << " is signed: " << f2.is_signed() << std::endl;

        std::cout << "Trying to sign form " << f4.getname() << " with " << b2.getname() << std::endl;
        f4.beSigned(b2);
        std::cout << f4.getname() << " is signed: " << f4.is_signed() << std::endl;

        // Test des exceptions
        try {
            Form f5("TooHigh", 0, 25);
        } catch (const Form::GradeTooHighException &e) {
            std::cerr << "Exception caught: " << e.what() << std::endl;
        }

        try {
            Form f6("TooLow", 151, 25);
        } catch (const Form::GradeTooLowException &e) {
            std::cerr << "Exception caught: " << e.what() << std::endl;
        }

        try {
            f1.beSigned(b2);
        } catch (const Form::GradeTooLowException &e) {
            std::cerr << "Exception caught: " << e.what() << std::endl;
        }

    } catch (const std::exception &e) {
        std::cerr << "Unexpected exception: " << e.what() << std::endl;
    }

    return 0;
}
