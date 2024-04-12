/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:35:08 by biaroun           #+#    #+#             */
/*   Updated: 2024/04/12 07:45:17 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal {
    public:
        Cat(void);
        Cat(Cat const &src);
        virtual ~Cat(void);

        void	makeSound(void) const;
    
    private:
        Brain *m_brain;
};

#endif