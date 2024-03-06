/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:31:00 by biaroun           #+#    #+#             */
/*   Updated: 2024/03/06 14:28:12 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int main(int ac,char **av) {
    if (ac <= 1){
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    } else {
        for (int i = 1; i < ac; i++) {
            std::string arg = av[i];
            for (size_t j = 0; j < arg.size(); j++) {
                if (islower(arg.at(j))) {
                    char c = toupper(arg.at(j));
                    std::cout << c;
                } else
                    std::cout << arg.at(j);
            }
        }
    }
}