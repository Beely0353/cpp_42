/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 03:56:12 by biaroun           #+#    #+#             */
/*   Updated: 2024/06/17 07:50:07 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure: public AMateria{
	public:
		Cure();
		Cure(Cure const & ref);
		Cure & operator=(Cure const & ref);
        ~Cure();

		std::string const &getType() const;
		Cure *clone() const;
		void use(ICharacter& target);

	private:
		std::string m_type;

};

#endif