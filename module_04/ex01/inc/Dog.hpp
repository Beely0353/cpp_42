/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:37:20 by biaroun           #+#    #+#             */
/*   Updated: 2024/06/11 18:47:15 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
# define Dog_HPP

# include "Animal.hpp"

class Dog: public Animal {
    public:
        Dog(void);
        Dog(Dog const &src);
        Dog &operator=(Dog const &rhs);
        ~Dog(void);

        void	makeSound(void) const;
        void    setBrain(const std::string& idea, int index);
        void    sayBrain(int index);
    private:
        Brain *m_brain;
};

#endif