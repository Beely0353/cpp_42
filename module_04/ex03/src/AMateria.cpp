/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 04:00:27 by biaroun           #+#    #+#             */
/*   Updated: 2024/06/17 08:02:37 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"

    AMateria::AMateria(void) {
        std::cout << "Creation d'un AMateria" << std::endl;
        //m_type = "default AMateria";
    }
    
    AMateria::AMateria(std::string const &type) {
        std::cout << "Creation d'un AMateria" << std::endl;
        m_type = type;
    }

    AMateria::AMateria(AMateria const &src) {
        std::cout << "AMateria copy called" << std::endl;
        *this = src;
    }
    
    AMateria &AMateria::operator=(AMateria const &rhs) {
        std::cout << "AMateria copy assignment operator called" << std::endl;
        if (this != &rhs) {
            this->m_type = rhs.m_type;
        }
        return *this;
    }

    AMateria::~AMateria(void) {
        std::cout << "Destruction d'un AMateria" << std::endl;
    }

/*-----------------------------------------------------------------------*/

    std::string const &AMateria::getType() const {
        return(m_type);
    }

    int AMateria::getidx(int i, AMateria *m) {
        if (i < 0 || i > 3){
            std::cout << i << " is too big, need number between 0 and 3" << std::endl;
            return -1;
        }
        delete m;
        return i;
    }
    void AMateria::use(ICharacter& target) {
        std::cout << this->m_type << "used on" << target.getName() << std::endl;
    }