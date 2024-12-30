/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 17:31:48 by biaroun           #+#    #+#             */
/*   Updated: 2024/12/30 17:53:16 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


RPN::RPN()
{}

RPN::RPN(const RPN & other): _stack(other._stack)
{}

RPN &RPN::operator= (const RPN & other)
{
	if (this != &other)
		_stack = other._stack;
	return *this;
}

RPN::~RPN()
{}


void RPN::calculate(std::string input)
{
    std::istringstream iss(input);
    std::string token;

    while (iss >> token) // Lire l'expression token par token
    {
        // Si le token est un nombre
        if (isdigit(token[0]) || (token[0] == '-' && token.length() > 1 && isdigit(token[1]))) 
        {
            double number = atof(token.c_str()); // Utilisation de atof pour la conversion en double
            _stack.push(number);
        }
        // Si le token est un opérateur
        else if (token == "+" || token == "-" || token == "*" || token == "/")
        {
            if (_stack.size() < 2) {
                std::cout << "Error: insufficient operands for operation '" << token << "'." << std::endl;
                return;
            }

            double b = _stack.top();
            _stack.pop();
            double a = _stack.top();
            _stack.pop();

            if (token == "+")
                _stack.push(a + b);
            else if (token == "-")
                _stack.push(a - b);
            else if (token == "*")
                _stack.push(a * b);
            else if (token == "/")
            {
                if (b == 0) {
                    std::cout << "Error: division by zero." << std::endl;
                    return;
                }
                _stack.push(a / b);
            }
        }
        else
        {
            std::cout << "Invalid input: unexpected token." << std::endl;
            return;
        }
    }

    if (_stack.size() == 1) {
        double result = _stack.top();
        _stack.pop();
        std::cout << result << std::endl;
    } else {
        std::cout << "Invalid input: too many operands." << std::endl;
    }
}
