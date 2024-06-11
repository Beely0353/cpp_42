/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:53:00 by biaroun           #+#    #+#             */
/*   Updated: 2024/06/11 19:01:39 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class AAnimal {
    public:
        AAnimal(void);
        AAnimal(AAnimal const &src);
        AAnimal &operator=(AAnimal const &rhs);
        virtual ~AAnimal( void );

        std::string	getType( void ) const;

        virtual void	makeSound(void) const;
    protected:
        std::string type;
};

#endif