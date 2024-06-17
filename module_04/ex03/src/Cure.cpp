/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 19:04:02 by biaroun           #+#    #+#             */
/*   Updated: 2024/06/17 08:10:32 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "IMateriaSource.hpp"

    Cure::Cure(){
        m_type = "cure";
        std::cout << this->m_type << " has constructed\n";
    }

    Cure::Cure(Cure const & ref) : AMateria(ref){
        m_type = "Cure";;
        std::cout << this->m_type << " constructed from copy\n";
    }
    
    Cure & Cure::operator=(Cure const & ref){
        std::cout << "Assigned from " << ref.getType() << std::endl;
        return (*this);
    }

    Cure::~Cure(){
        std::cout << this->m_type << " destroyed\n";
    }

/*-----------------------------------------------------------------------*/

    Cure *Cure::clone() const{
        Cure *ret = new Cure;
        return (ret);
    }

    void Cure::use(ICharacter& target){
        std::cout << "\033[34m * heals " << target.getName() << "\'s wounds *\033[0m" << std::endl;
    }

    std::string const & Cure::getType( void ) const{
	    return (m_type);
    }