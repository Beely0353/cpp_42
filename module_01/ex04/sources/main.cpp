/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:53:42 by biaroun           #+#    #+#             */
/*   Updated: 2024/03/11 15:05:43 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int ft_replace(std::string  &cont, const std::string occ, const std::string repl, std::string fn) {
    size_t pos = cont.find(occ);

    while (pos != std::string::npos) {
        cont.erase(pos, occ.length());
        cont.insert(pos, repl);
        pos = cont.find(occ, pos + repl.length());
    }

    fn += ".replace";
    std::ofstream newf(fn.c_str());

    if (newf.is_open()) {
        newf << cont;
        newf.close();
    } else {
        std::cerr << "Error creating file." << std::endl;
        return (1);
    }
    return (0);
}

int main(int ac, char **av) {
    if (ac != 4) {
        std::cerr << "Usage: " << av[0] << " <input_filename> <occurrence> <replacement>" << std::endl;
        return (1);
    }

    std::string fn = av[1];
    const std::string occ = av[2];
    const std::string repl = av[3];
    std::ifstream file(fn.c_str());
    if (file.is_open()) {
        file.seekg(0, std::ios::end);
        size_t fileSize = file.tellg();
        file.seekg(0, std::ios::beg);

        std::string content(fileSize, ' ');

        file.read(&content[0], fileSize);
        file.close();
        if (ft_replace(content, occ, repl, fn))
            return (1);
        file.close();
    } else {
        std::cerr << "Error opening file." << std::endl;
        return (1);
    }
    return (0);
}