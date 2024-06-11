/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 07:35:14 by biaroun           #+#    #+#             */
/*   Updated: 2024/06/05 17:15:22 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

    Brain::Brain(void) {
        std::cout << "Creation d'un Brain" << std::endl;
    }

    Brain::Brain(Brain const &src) {
        *this = src;
    }

    Brain &Brain::operator=(Brain const &rhs) {
        std::cout << "Brain copy assignment operator called" << std::endl;
        if (this != &rhs) {
            for (int i = 0; i < 100; ++i) {
                m_ideas[i] = rhs.m_ideas[i];
            }
        }
        return *this;
    }

    Brain::~Brain(void) {
        std::cout << "Destruction d'un Brain" << std::endl;
    }

/**********************************/

    std::string Brain::GetIdea (int i) const {
        return (m_ideas[i]);
    }

    void        Brain::SetIdea (std::string ideas, int i) {
        m_ideas[i] = ideas;
    }

    