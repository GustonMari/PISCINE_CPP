/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:06:19 by gmary             #+#    #+#             */
/*   Updated: 2022/05/20 10:26:08 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "All.hpp"

/*
	CONSTRUCTOR
*/

AMateria::AMateria(std::string const & type): _type(type)
{
	std::cout << BRED "Materia " << type << " was constructed" CRESET << std::endl;
}

AMateria::AMateria(): _type("?????????")
{
	std::cout << BRED "????????????????" CRESET << std::endl;
}

AMateria::AMateria(AMateria const & src)
{
	std::cout << BRED "Materia " << src._type << " was copy constructed" CRESET << std::endl;
	*this = src;
}

AMateria::~AMateria()
{
	std::cout << "AMateria has been destroyed" << std::endl;
}

/*
	OPERATOR OVERLOAD
*/

AMateria	&AMateria::operator=(AMateria const & src)
{
	this->_type = src._type;
	return (*this);
}

/*
	FUNCTION
*/

//ici on retourne une const ref sur _type bien utile

std::string	const & AMateria::getType(void) const
{
	return (_type);
}

//WARNING que faire ici ??
/* void		AMateria::use(ICharacter & target)
{
	(void) target;
	std::cout << BMAG "USING MATERIA" CRESET << std::endl;
} */

void	AMateria::use(ICharacter & target)
{
	(void)target;
	std::cout << BMAG "USING MATERIA" CRESET << std::endl;
}