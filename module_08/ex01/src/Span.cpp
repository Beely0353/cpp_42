/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 21:01:41 by biaroun           #+#    #+#             */
/*   Updated: 2024/09/19 14:06:43 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

    Span::Span(int n) {
        _vec.reserve(n);
    }

    Span::Span(const Span &cpy) {
        *this = cpy;
    }

    Span::~Span(void) {
    }

    Span &Span::operator=(const Span &rhs) {
        if (this != &rhs) {
            _vec = rhs._vec;
        }
        return *this;
    }

    void Span::addNumber(int x) {
        if (_vec.size() == _vec.capacity()) {
            throw std::out_of_range("Max capacity reached");
        }
        _vec.push_back(x);
    }

    int Span::shortestSpan() const {
        if (_vec.size() < 2)
            throw std::logic_error("Not enough numbers");
            
        std::vector<int> tmp(_vec);
        std::sort(tmp.begin(), tmp.end());
        int min_span = INT_MAX;
        for(size_t i = 1; i < tmp.size(); i++){
            min_span = std::min(min_span, tmp[i] - tmp[i - 1]);
        }
        return min_span;
    }

    int Span::longestSpan() const {
        if (_vec.size() < 2)
            throw std::logic_error("Not enough numbers");

        return *std::max_element(_vec.begin(), _vec.end()) - *std::min_element(_vec.begin(), _vec.end());
    }

    void Span::showNumbers() const {
        for (size_t i = 0; i < _vec.size(); i++) {
            std::cout << _vec[i] << " ";
        }
        std::cout << std::endl;
    }
        
