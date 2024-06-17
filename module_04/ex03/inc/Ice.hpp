/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 03:55:17 by biaroun           #+#    #+#             */
/*   Updated: 2024/06/17 07:50:03 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice: public AMateria {
	public:
		Ice();
		Ice(Ice const &ref);
		Ice & operator=(Ice const &ref);
		~Ice();

		std::string const &getType() const;
		Ice *clone() const;
		void use(ICharacter& target);

	private:
		std::string m_type;

};

#endif