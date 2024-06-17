/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 22:15:40 by biaroun           #+#    #+#             */
/*   Updated: 2024/06/17 08:11:39 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

	MateriaSource::MateriaSource(){
		std::cout << "Creation d'un Materia source\n";
		for(int i = 0; i < 4; i++){
			this->m_materia[i] = 0;
		}
	}

	MateriaSource::MateriaSource(MateriaSource const & ref){
		for (int i = 0; i < 4; i++){
			if (ref.m_materia[i])
				this->m_materia[i] = (ref.m_materia[i])->clone();
		}
		std::cout << "Materia source copy called\n";
	}

	MateriaSource & MateriaSource::operator=(MateriaSource const & ref){
		for(int i = 0; i < 4; i++)
		{
			if (this->m_materia[i])
				delete this->m_materia[i];
			if (ref.m_materia[i])
				this->m_materia[i] = (ref.m_materia[i])->clone();
		}
		return (*this);
	}

	MateriaSource::~MateriaSource(){
		for (int i = 0; i < 4; i++)
		{
			if (this->m_materia[i])
				delete this->m_materia[i];
		}
		std::cout << "Destruction d'un Materia source\n";
	}

/*-----------------------------------------------------------------------*/

	void MateriaSource::learnMateria(AMateria *m){
		int i = 0;

		while ((this->m_materia)[i] != 0 && i < 4)
			i++;
		if (i >= 4)
		{
			std::cout << "Unable to learn more than 4 Materia";
			return ;
		}
		(this->m_materia)[i] = m;
		std::cout << "Materia " << m->getType() << "has learned\n";
	}

	AMateria* MateriaSource::createMateria(std::string const & type)
	{
		int i = 0;

		while ((m_materia)[i] && m_materia[i]->getType() != type && i < 4)
			i++;
		if (i >= 4 || !m_materia[i]){
			std::cout << type << " materia not learned" << std::endl;
			return (NULL);
		}
		return (m_materia[i]->clone());
	}