/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:52:27 by gmary             #+#    #+#             */
/*   Updated: 2022/06/03 10:36:26 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "All.hpp"

/*
	CONSTRUCTOR
*/


MateriaSource::MateriaSource()
{
	this->materias[0] = NULL;
	this->materias[1] = NULL;
	this->materias[2] = NULL;
	this->materias[3] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	*this = src;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i])
			delete this->materias[i];
	}
	
}

/*
	OPERATOR OVERLOAD
*/

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->materias[i])
			delete this->materias[i];
	}
	for (int i = 0; i < 4; i++)
	{
		this->materias[i] = rhs.materias[i];
	}
	return (*this);
}

/*
	FUNCTION
*/

//fait une simple copie de MateriaSource et non pas un clone

void	MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->materias[i])
		{
			this->materias[i] = materia;
			return ;
		}
	}
}

AMateria * MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i] && this->materias[i]->getType() == type)
			return (this->materias[i]);
	}
	return (NULL);
}
