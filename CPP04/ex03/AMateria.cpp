/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:06:19 by gmary             #+#    #+#             */
/*   Updated: 2022/05/23 13:29:38 by gmary            ###   ########.fr       */
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
	std::cout << BRED "AMateria::use()" CRESET << std::endl;	//WARNING FUCKK	
	if (_type.compare("ice") == 0)
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (_type.compare("cure") == 0)
		std::cout << "* heals" << target.getName() << "\'s wounds *" << std::endl;
	(void)target;
	std::cout << BMAG "USING MATERIA" CRESET << std::endl;
}

void	AMateria::setType(std::string const & type)
{
	_type = type;
}