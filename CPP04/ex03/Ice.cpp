/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:11:39 by gmary             #+#    #+#             */
/*   Updated: 2022/05/23 13:20:37 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "All.hpp"

/*
	CONSTRUCTOR
*/

Ice::Ice()
{
	std::cout << UBLU "Ice was constructed"  CRESET << std::endl;
	setType("ice");
}

Ice::Ice(Ice const & src): AMateria(src)
{
	std::cout << UBLU "Ice was copy constructed"  CRESET << std::endl;
	*this = src;
}

Ice::~Ice()
{
	std::cout << UBLU "Ice was Destructed" CRESET << std::endl;
}

/*
	OPERATOR OVERLOAD
*/

Ice	 & Ice::operator=(Ice const & rhs)
{
	AMateria::operator=(rhs);
	
	return (*this);
}

/*
	FUNCTION
*/

AMateria	* Ice::clone(void) const
{
	Ice	*newIce = new Ice(*this);
	return (newIce);
}

void	Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

void 	Ice::setType(std::string const & type)
{
	AMateria::setType(type);
}
