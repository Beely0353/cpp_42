/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 13:45:05 by biaroun           #+#    #+#             */
/*   Updated: 2024/08/14 14:26:38 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
void iter(T *array, size_t len, void (*foo)(T &)) {
    if (array == NULL || foo == NULL)
        return;
    for (size_t i = 0; i < len; ++i)
        foo(array[i]);
}
