/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:51:39 by gmary             #+#    #+#             */
/*   Updated: 2022/04/28 15:00:21 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal " << type << " was constructed" << std::endl;
}

WrongAnimal::WrongAnimal(std::string name)
{
	this->type = name;
	std::cout << "WrongAnimal " << type << "was constructed" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & src)
{
	if (this != &src)
	{
		*this = src;
	}
	std::cout << "WrongAnimal was copy constructed" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal \'" << type << "\' was  destructed" << std::endl;
}

WrongAnimal	& WrongAnimal::operator=(const WrongAnimal &src)
{
	if (this != &src)
	{
		this->type = src.type;
	}
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return(this->type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sounds" << std::endl;
}