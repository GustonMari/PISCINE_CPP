/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:20:04 by gmary             #+#    #+#             */
/*   Updated: 2022/05/23 13:22:53 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "All.hpp"

/*
	CONSTRUCTOR
*/

Cure::Cure()
{
	std::cout << UBLU "Cure was constructed"  CRESET << std::endl;
	setType("cure");
}

Cure::Cure(Cure const & src): AMateria(src)
{
	std::cout << UBLU "Cure was copy constructed"  CRESET << std::endl;
	*this = src;
}

Cure::~Cure()
{
	std::cout << UBLU "Cure was Destructed" CRESET << std::endl;
}

/*
	OPERATOR OVERLOAD
*/
Cure	 & Cure::operator=(Cure const & rhs)
{
	AMateria::operator=(rhs);
	return (*this);
}

/*
	FUNCTION
*/

AMateria	* Cure::clone(void) const
{
	Cure	*newCure = new Cure(*this);
	return (newCure);
}

void	Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << "\'s wounds *" << std::endl;
}

void	Cure::setType(std::string const & type)
{
	AMateria::setType(type);
}