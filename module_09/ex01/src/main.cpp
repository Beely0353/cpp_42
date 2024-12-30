/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 17:31:34 by biaroun           #+#    #+#             */
/*   Updated: 2024/12/30 17:51:23 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "RPN.hpp"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cout << "Usage: rpn_calculator <expression>" << std::endl;
        return 1;
    }

    std::string input = argv[1];
    RPN calculator;

    calculator.calculate(input);

    return 0;
}

