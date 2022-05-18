/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:51:39 by gmary             #+#    #+#             */
/*   Updated: 2022/05/18 14:28:42 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*
	CONSTRUCTOR
*/

AAnimal::AAnimal()
{
	std::cout << "AAnimal " << type << " was constructed" << std::endl;
}

AAnimal::AAnimal(std::string name)
{
	this->type = name;
	std::cout << "AAnimal " << type << "was constructed" << std::endl;
}

AAnimal::AAnimal(const AAnimal & src)
{
	*this = src;
	std::cout << "AAnimal was copy constructed" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal \'" << type << "\' was  destructed" << std::endl;
}

/*
	OPERATOR OVERLOAD
*/

AAnimal	& AAnimal::operator=(const AAnimal &src)
{
	this->type = src.type;
	return (*this);
}

/*
	FUNCTION
*/

std::string	AAnimal::getType(void) const
{
	return(this->type);
}

void	AAnimal::makeSound() const
{
	std::cout << "AAnimal sounds" << std::endl;
}