/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 13:09:05 by biaroun           #+#    #+#             */
/*   Updated: 2024/08/13 13:20:10 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serialization.hpp"

int main() {
    Data originalData;
    originalData.id = 123;
    originalData.name = "Test Data";

    std::cout << "Original Data:" << std::endl;
    std::cout << "  ID: " << originalData.id << std::endl;
    std::cout << "  Name: " << originalData.name << std::endl;

    uintptr_t raw = Serializer::serialize(&originalData);

    Data* deserializedData = Serializer::deserialize(raw);

    if (deserializedData == &originalData) {
        std::cout << "Deserialization was successful!" << std::endl;
    } else {
        std::cout << "Deserialization failed!" << std::endl;
    }

    std::cout << "Deserialized Data:" << std::endl;
    std::cout << "  ID: " << deserializedData->id << std::endl;
    std::cout << "  Name: " << deserializedData->name << std::endl;

    return 0;
}
