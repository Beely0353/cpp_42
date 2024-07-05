/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:50:05 by biaroun           #+#    #+#             */
/*   Updated: 2024/07/04 16:52:06 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    try {
        // Test du constructeur par défaut
        Bureaucrat b1;
        std::cout << b1.getname() << " has grade " << b1.getgrade() << std::endl;

        // Test du constructeur avec paramètres
        Bureaucrat b2("John", 100);
        std::cout << b2.getname() << " has grade " << b2.getgrade() << std::endl;

        // Test du constructeur par copie
        Bureaucrat b3(b2);
        std::cout << b3.getname() << " has grade " << b3.getgrade() << std::endl;

        // Test de l'opérateur d'affectation
        Bureaucrat b4;
        b4 = b2;
        std::cout << b4.getname() << " has grade " << b4.getgrade() << std::endl;

        // Test de l'incrémentation du grade
        b2.gradeinc();
        std::cout << b2.getname() << " after increment has grade " << b2.getgrade() << std::endl;

        // Test de la décrémentation du grade
        b2.gradedec();
        std::cout << b2.getname() << " after decrement has grade " << b2.getgrade() << std::endl;

        // Test des exceptions
        try {
            Bureaucrat b5("TooHigh", 0);
        } catch (const Bureaucrat::GradeTooHighException &e) {
            std::cerr << "Exception caught: " << e.what() << std::endl;
        }

        try {
            Bureaucrat b6("TooLow", 151);
        } catch (const Bureaucrat::GradeTooLowException &e) {
            std::cerr << "Exception caught: " << e.what() << std::endl;
        }

        try {
            b2.gradeinc();
            b2.gradeinc();
            // Assuming initial grade was 150
        } catch (const Bureaucrat::GradeTooLowException &e) {
            std::cerr << "Exception caught: " << e.what() << std::endl;
        }

        try {
            b2.gradedec();
            b2.gradedec();
            // Assuming initial grade was 1
        } catch (const Bureaucrat::GradeTooHighException &e) {
            std::cerr << "Exception caught: " << e.what() << std::endl;
        }
    } catch (const std::exception &e) {
        std::cerr << "Unexpected exception: " << e.what() << std::endl;
    }

    return 0;
}
