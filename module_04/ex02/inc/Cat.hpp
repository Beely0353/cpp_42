/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:35:08 by biaroun           #+#    #+#             */
/*   Updated: 2024/06/11 18:52:29 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"

class Cat: public AAnimal {
    public:
        Cat(void);
        Cat(Cat const &src);
        Cat &operator=(Cat const &rhs);
        virtual ~Cat(void);

        virtual void	makeSound(void) const;
        void    setBrain(const std::string& idea, int index);
        void    sayBrain(int index);
    private:
        Brain *m_brain;
};

#endif