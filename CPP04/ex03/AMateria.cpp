/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:06:19 by gmary             #+#    #+#             */
/*   Updated: 2022/05/19 13:13:29 by gmary            ###   ########.fr       */
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
	std::cout << BRED "Materia " << src.type << " was copy constructed" CRESET << std::endl;
	*this = src;
}

/*
	OPERATOR OVERLOAD
*/

AMateria AMateria::&operator=(AMateria const & src)
{
	this->type = src.type;
	return (*this);
}

/*
	FUNCTION
*/

//ici on retourne une const ref sur _type bien utile

/* std::string	const & AMateria::getType(void) const
{
	return (_type);
} */

void		AMateria::use(ICharacter & target)
{
	
}