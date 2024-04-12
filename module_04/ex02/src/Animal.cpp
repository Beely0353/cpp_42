/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:38:11 by biaroun           #+#    #+#             */
/*   Updated: 2024/04/12 08:09:48 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/**********************************/

    std::string	Animal::getType( void ) const {
        return (type);
    }

    void	Animal::makeSound(void) const {
        std::cout << "..." << std::endl;
    }