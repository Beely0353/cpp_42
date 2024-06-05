/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 07:25:42 by biaroun           #+#    #+#             */
/*   Updated: 2024/06/05 17:15:09 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain {
    public:
        Brain (void);
        Brain (Brain const &src);
        Brain &operator=(Brain const &rhs);
        ~Brain (void);

        std::string GetIdea (int i) const;
        void        SetIdea (std::string ideas, int i);
        
    protected:
        std::string m_ideas[100];

};

#endif