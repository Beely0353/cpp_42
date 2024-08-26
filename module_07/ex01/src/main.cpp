/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 14:22:00 by biaroun           #+#    #+#             */
/*   Updated: 2024/08/14 14:28:13 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

template <typename T>
void increment(T &x) {
    ++x;
}

template <typename T>
void printElement(T &x) {
    std::cout << x << " ";
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intArrayLen = sizeof(intArray) / sizeof(intArray[0]);

    std::cout << "Int array before increment: ";
    iter(intArray, intArrayLen, printElement);
    std::cout << std::endl;

    iter(intArray, intArrayLen, increment);

    std::cout << "Int array after increment: ";
    iter(intArray, intArrayLen, printElement);
    std::cout << std::endl;

    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    size_t doubleArrayLen = sizeof(doubleArray) / sizeof(doubleArray[0]);

    std::cout << "Double array before increment: ";
    iter(doubleArray, doubleArrayLen, printElement);
    std::cout << std::endl;

    iter(doubleArray, doubleArrayLen, increment);

    std::cout << "Double array after increment: ";
    iter(doubleArray, doubleArrayLen, printElement);
    std::cout << std::endl;

    return 0;
}
