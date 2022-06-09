/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:51:39 by gmary             #+#    #+#             */
/*   Updated: 2022/06/08 18:47:38 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*
	CONSTRUCTOR
*/

Animal::Animal()
{
	std::cout << "Animal " << type << " was constructed" << std::endl;
}

Animal::Animal(std::string name)
{
	this->type = name;
	std::cout << "Animal " << type << "was constructed" << std::endl;
}

Animal::Animal(const Animal & src)
{
	if (this != &src)
	{
		*this = src;
	}
	std::cout << "Animal was copy constructed" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal \'" << type << "\' was  destructed" << std::endl;
}

/*
	OPERATOR OVERLOAD
*/

Animal	& Animal::operator=(const Animal &src)
{
	if (this != &src)
	{
		this->type = src.type;
	}
	return (*this);
}

/*
	FUNCTION
*/

std::string	Animal::getType(void) const
{
	return(this->type);
}

void	Animal::makeSound() const
{
	std::cout << "Animal sounds" << std::endl;
}