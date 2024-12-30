/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:35:20 by biaroun           #+#    #+#             */
/*   Updated: 2024/12/30 17:59:43 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <deque>
#include <list>
#include <algorithm>
#include <ctime>
#include <cstdlib>

class PmergeMe {
	public:
        PmergeMe(int ac, char **av);
        template <typename T>
        void display(const T& container);
        void InsertSortDeque(std::deque<int>& arr);
        void InsertSortList(std::list<int>& arr);
};
