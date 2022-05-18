/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:51:39 by gmary             #+#    #+#             */
/*   Updated: 2022/04/28 13:00:13 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*
--------------------CONSTRUCTOR----------------------------------------
*/

WrongCat::WrongCat()
{
	WrongAnimal::type = "WrongCat";
	std::cout << "WrongCat was constructed" << std::endl;
}

WrongCat::WrongCat(std::string name)
{
	this->type = name;
	std::cout << "WrongCat " << type << "was constructed" << std::endl;
}

WrongCat::WrongCat(const WrongCat & src): WrongAnimal(src)
{
	*this = src;
	std::cout << "WrongCat was copy constructed" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat was destructed" << std::endl;
}

/*
--------------------OPERATOR----------------------------------------
*/

WrongCat	& WrongCat::operator=(const WrongCat &src)
{
	this->WrongAnimal::type = src.WrongAnimal::type;
	this->type = src.type;
	return (*this);
}

/*
--------------------FUNCTION----------------------------------------
*/

void	WrongCat::makeSound() const
{
	std::cout << "MIIIIIIIIAAAAAOUUUU JE SUIS LE MAUVAIS CHAT" << std::endl;
}
