/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 13:32:30 by biaroun           #+#    #+#             */
/*   Updated: 2024/08/14 13:40:44 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
void swap(T &x, T &y)
{
    T temp = x;
    x = y;
    y = temp;
}

template<typename T>
const T &max(const T &x, const T &y)
{
    return (x >= y ? x : y);
}

template<typename T>
const T &min(const T &x, const T &y)
{
    return (x <= y ? x : y);
}
