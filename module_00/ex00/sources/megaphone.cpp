/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:31:00 by biaroun           #+#    #+#             */
/*   Updated: 2023/10/18 11:54:46 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(int ac,char **av) {
    if (ac <= 1){
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
    } else {
        for (int i = 1; i < ac; i++) {
            string arg = av[i];
            for (size_t j = 0; j < arg.size(); j++) {
                if (islower(arg.at(j))) {
                    char c = toupper(arg.at(j));
                    cout << c;
                } else
                    cout << arg.at(j);
            }
        }
    }
}