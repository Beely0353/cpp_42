/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 07:16:52 by biaroun           #+#    #+#             */
/*   Updated: 2024/06/05 17:12:47 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
    public:
        WrongCat(void);
        WrongCat(WrongCat const &src);
        WrongCat &operator=(WrongCat const &rhs);
        virtual ~WrongCat(void);

        void	makeSound(void) const;
};

#endif