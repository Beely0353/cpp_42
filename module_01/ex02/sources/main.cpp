/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:12:28 by biaroun           #+#    #+#             */
/*   Updated: 2024/03/11 15:05:07 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "Address of str: " << &str << std::endl;
    std::cout << "Address of stringPtr: " << stringPTR << std::endl;
    std::cout << "Address of stringRef: " << &stringREF << std::endl;

    std::cout << "\nValue of str: " << str << std::endl;
    std::cout << "Value of stringPtr: " << *stringPTR << std::endl;
    std::cout << "Value of stringRef: " << stringREF << std::endl;

    str = "No brain";
    std::cout << "\nValue of str: " << str << std::endl;
    std::cout << "Value of stringPtr: " << *stringPTR << std::endl;
    std::cout << "Value of stringRef: " << stringREF << std::endl;

    *stringPTR = "afk brain";
    std::cout << "\nValue of str: " << str << std::endl;
    std::cout << "Value of stringPtr: " << *stringPTR << std::endl;
    std::cout << "Value of stringRef: " << stringREF << std::endl;

    stringREF = "0 brain";
    std::cout << "\nValue of str: " << str << std::endl;
    std::cout << "Value of stringPtr: " << *stringPTR << std::endl;
    std::cout << "Value of stringRef: " << stringREF << std::endl;

}