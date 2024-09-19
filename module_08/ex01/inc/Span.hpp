/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 21:01:10 by biaroun           #+#    #+#             */
/*   Updated: 2024/09/19 14:07:15 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <exception>
#include <climits>


class Span {
    public:
        Span(int n);
        Span(const Span &cpy);
        ~Span(void);
        Span &operator=(const Span &rhs);
        
        void    addNumber(int x);
        int		shortestSpan() const;
		int		longestSpan() const;
		void	showNumbers() const;
        
    private:
        std::vector<int>	_vec;
};
