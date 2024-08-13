/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 13:04:14 by biaroun           #+#    #+#             */
/*   Updated: 2024/08/13 13:18:27 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

    uintptr_t Serializer::serialize(Data* ptr) {
        return (reinterpret_cast<uintptr_t>(ptr));
    }

    Data* Serializer::deserialize(uintptr_t raw) {
        return (reinterpret_cast<Data *>(raw));
    }
