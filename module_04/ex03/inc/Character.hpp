/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 03:53:47 by biaroun           #+#    #+#             */
/*   Updated: 2024/06/15 22:44:52 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character: public ICharacter {
    public:
        Character(void);
        Character(std::string name);
        Character (Character const &src);
        Character &operator=(Character const &rhs);
        ~Character(void);

        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        AMateria *getMateria(int i);
        
    private:
        std::string m_name;
        AMateria    *m_materia[4];  
        
};

#endif