/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:10:45 by biaroun           #+#    #+#             */
/*   Updated: 2024/03/11 16:04:54 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {}
Harl::~Harl(void) {}

void    Harl::debug() {
    std::cout << BLU << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" EOC << std::endl;
}

void    Harl::info() {
    std::cout << GRE << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" EOC << std::endl;
}

void    Harl::warning() {
        std::cout << RED << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." EOC << std::endl;
}

void    Harl::error() {
        std::cout << RED << "This is unacceptable! I want to speak to the manager now." EOC << std::endl;
}

void Harl::complain(std::string level) {
    
    std::string levels[4] = {"DEBUG","INFO","WARNING","ERROR"};
    
    void (Harl::*ptr_levels[4]) (void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (int i = 0; i < 4; i++)
	if (levels[i] == level)
		(this->*ptr_levels[i])();
}