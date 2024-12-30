/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:35:20 by biaroun           #+#    #+#             */
/*   Updated: 2024/12/30 17:47:52 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stack>
#include <sstream>
#include <string>
#include <cmath>
#include <iomanip>

class RPN {
    public:
        RPN();
        RPN(const RPN & other);
        RPN & operator = (const RPN & other);
        ~RPN();

        void calculate(std::string input);
        

    private:
        std::stack<double> _stack;
};
