/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 22:09:23 by biaroun           #+#    #+#             */
/*   Updated: 2024/10/22 22:17:57 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

/*int parse(std::string str){

}*/

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <value>" << std::endl;
        return 1;
    }

    std::string str(argv[1]);
    ScalarConverter sc(argv[1]);

    sc.setType();
    
    if (str != "nan" && str != "nanf" && str != "+inf" && str != "+inff" && str != "-inf" && str != "-inff")
        sc.isImpossible();
    sc.converter();

    sc.printChar();
    sc.printInt();
    sc.printFloat();
    sc.printDouble();

    if (sc.getDouble() > std::numeric_limits<int>::max())
        std::cout << '1' << std::endl;
    exit(0);
}
