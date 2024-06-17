/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 03:44:56 by biaroun           #+#    #+#             */
/*   Updated: 2024/06/17 08:02:32 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"


class AMateria {
    public:
        AMateria(void);
        AMateria(std::string const & type);
        AMateria (AMateria const &src);
        AMateria &operator=(AMateria const &rhs);
        virtual ~AMateria(void);

        virtual std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);

    
    protected:
        std::string m_type;
        
};

#endif