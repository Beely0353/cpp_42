/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 17:37:52 by biaroun           #+#    #+#             */
/*   Updated: 2024/06/17 08:03:03 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

    Character::Character(void) {
        std::cout << "Creation d'un Character " << std::endl;
        for (int i = 0; i != 3; i++) {
            m_materia[i] = NULL;
        }
        m_name = "default";
    }

    Character::~Character(void) {
        std::cout << "Destruction d'un Character " << std::endl;
        for (int i = 0; i != 3; i++) {
            if (m_materia[i])
                delete m_materia[i];
        }
    }

    Character::Character(std::string name) {
        std::cout << "Creation d'un Character " << name << std::endl;
        for (int i = 0; i != 3; i++) {
            m_materia[i] = NULL;
        }
        m_name = name;
    }

    Character::Character(Character const &src) {
        std::cout << "Character copy called" << std::endl;
        *this = src;
    }
    
    Character &Character::operator=(Character const &rhs) {
        std::cout << "Character copy assignment operator called" << std::endl;
        if (this != &rhs) {
            for (int i = 0; i != 3; i++) {
                if (m_materia[i])
                    delete m_materia[i];
                m_materia[i] = rhs.m_materia[i]->clone();
            }
            m_name = rhs.m_name;
        }
        return *this;
    }

/*-----------------------------------------------------------------------*/

        std::string const &Character::getName() const {
            return m_name;
        }

        void Character::equip(AMateria* m){
        
        	if (!m) {
                std::cout << m_name << " tried to equip nothing\n";
                return ;
            }
            for (int i = 0; i != 3; i++) {
                if (m_materia[i] == NULL) {
                    m_materia[i] = m;
                    std::cout << m_name << " has equipped " << m->getType() << std::endl;
                    return;
                }
            }
            std::cout << m_name << " has no place for " << m->getType() << std::endl;
        }

        void Character::unequip(int idx){
            if (idx < 0 || idx > 3)
                std::cout << m_name << ": " << idx << " is too big, need number between 0 and 3" << std::endl;
            else if (m_materia[idx] == NULL)
                std::cout << m_name << " nothing is equipped at index " << idx << std::endl;
            else {
                std::cout << m_name << " has unequiped " << m_materia[idx]->getType() << " at slot " << m_materia[idx]->getidx(idx, m_materia[idx]) << std::endl;
                m_materia[idx] = 0;
            }
        }
    
        void Character::use(int idx, ICharacter& target){
            if (idx < 0 || idx >= 4 || !(this->m_materia)[idx]){
                std::cout << m_name << " nothing is equipped at index " << idx << std::endl;
                return;
            }
            std::cout << m_name;
	        ((this->m_materia)[idx])->use(target);
        }

        AMateria *Character::getMateria(int i) {
             return m_materia[i];
         }