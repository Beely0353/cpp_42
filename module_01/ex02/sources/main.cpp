/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:12:28 by biaroun           #+#    #+#             */
/*   Updated: 2023/10/20 15:24:23 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "HI THIS IS BRAIN";
    string* stringPTR = &str;
    string& stringREF = str;

    cout << "Address of str: " << &str << endl;
    cout << "Address of stringPtr: " << stringPTR << endl;
    cout << "Address of stringRef: " << &stringREF << endl;

    cout << "\nValue of str: " << str << endl;
    cout << "Value of stringPtr: " << *stringPTR << endl;
    cout << "Value of stringRef: " << stringREF << endl;

    str = "No brain";
    cout << "\nValue of str: " << str << endl;
    cout << "Value of stringPtr: " << *stringPTR << endl;
    cout << "Value of stringRef: " << stringREF << endl;

    *stringPTR = "afk brain";
    cout << "\nValue of str: " << str << endl;
    cout << "Value of stringPtr: " << *stringPTR << endl;
    cout << "Value of stringRef: " << stringREF << endl;

    stringREF = "0 brain";
    cout << "\nValue of str: " << str << endl;
    cout << "Value of stringPtr: " << *stringPTR << endl;
    cout << "Value of stringRef: " << stringREF << endl;

}