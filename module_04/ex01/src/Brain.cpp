/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 07:35:14 by biaroun           #+#    #+#             */
/*   Updated: 2024/04/12 07:42:03 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

    Brain::Brain(void) {
        std::cout << "Creation d'un Brain" << std::endl;
    }

    Brain::Brain(Brain const &src) {
        *this = src;
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

    