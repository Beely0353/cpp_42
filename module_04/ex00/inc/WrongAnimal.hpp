/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 07:14:41 by biaroun           #+#    #+#             */
/*   Updated: 2024/06/05 17:12:13 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {
    public:
        WrongAnimal(void);
        WrongAnimal(WrongAnimal const &src);
        WrongAnimal &operator=(WrongAnimal const &rhs);
        virtual ~WrongAnimal( void );

        std::string	getType( void ) const;

        void	makeSound(void) const;
    protected:
        std::string type;
};

#endif