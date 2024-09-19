/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 13:07:17 by biaroun           #+#    #+#             */
/*   Updated: 2024/09/12 20:59:26 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma  once
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <exception>

template <typename T>
typename T::iterator easyfind(T& container, int value) {
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end()) {
        throw std::runtime_error("Value not found in the container");
    }
    return it;
}
