/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:53:42 by biaroun           #+#    #+#             */
/*   Updated: 2023/11/17 15:33:34 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int ft_replace(string  &cont, const string occ, const string repl, string fn) {
    size_t pos = cont.find(occ);

    while (pos != string::npos) {
        cont.erase(pos, occ.length());
        cont.insert(pos, repl);
        pos = cont.find(occ, pos + repl.length());
    }

    fn += ".replace";
    ofstream newf(fn.c_str());

    if (newf.is_open()) {
        newf << cont;
        newf.close();
    } else {
        cerr << "Error creating file." << endl;
        return (1);
    }
    return (0);
}

int main(int ac, char **av) {
    if (ac != 4) {
        cerr << "Usage: " << av[0] << " <input_filename> <occurrence> <replacement>" << endl;
        return (1);
    }

    string fn = av[1];
    const string occ = av[2];
    const string repl = av[3];
    ifstream file(fn.c_str());
    if (file.is_open()) {
        file.seekg(0, ios::end);
        size_t fileSize = file.tellg();
        file.seekg(0, ios::beg);

        string content(fileSize, ' ');

        file.read(&content[0], fileSize);
        file.close();
        if (ft_replace(content, occ, repl, fn))
            return (1);
        file.close();
    } else {
        cerr << "Error opening file." << endl;
        return (1);
    }
    return (0);
}