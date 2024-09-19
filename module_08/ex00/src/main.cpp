/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:23:49 by biaroun           #+#    #+#             */
/*   Updated: 2024/09/19 14:11:30 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main(void) {
    int arr[] = {1, 2, 3, 4, 5, 6};
    std::vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));
    easyfind(vec, 7);
}
