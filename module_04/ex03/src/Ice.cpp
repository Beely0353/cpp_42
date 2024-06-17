/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 19:03:53 by biaroun           #+#    #+#             */
/*   Updated: 2024/06/17 08:09:27 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "IMateriaSource.hpp"

    Ice::Ice(){
        m_type = "ice";
        std::cout << m_type << " has constructed\n";
    }

    Ice::Ice(Ice const & ref) : AMateria(ref){
        m_type = "ice";
        std::cout << this->m_type << " constructed from copy\n";
    }
    
    Ice & Ice::operator=(Ice const & ref){
        std::cout << "Assigned from " << ref.getType() << std::endl;
        return (*this);
    }

    Ice::~Ice(){
        std::cout << this->m_type << " destroyed\n";
    }

/*-----------------------------------------------------------------------*/

    Ice *Ice::clone() const{
        Ice	*ret = new Ice;
        return (ret);
    }

    void Ice::use(ICharacter& target){
        std::cout << "\033[34m * shoots an ice bolt at " << target.getName() << " *\033[0m" << std::endl;
    }

    std::string const & Ice::getType( void ) const{
	    return (m_type);
    }