/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 22:09:23 by biaroun           #+#    #+#             */
/*   Updated: 2024/08/09 22:16:10 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <value>" << std::endl;
        return 1;
    }

    ScalarConverter sc(argv[1]);


    sc.setType();
    //sc.isImpossible();
    sc.converter();

    sc.printChar();
    sc.printInt();
    sc.printFloat();
    sc.printDouble();

    return 0;
}
