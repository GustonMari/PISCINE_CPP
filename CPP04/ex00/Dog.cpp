/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:51:39 by gmary             #+#    #+#             */
/*   Updated: 2022/04/28 13:00:13 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
--------------------CONSTRUCTOR----------------------------------------
*/

Dog::Dog()
{
	Animal::type = "Dog";
	std::cout << "Dog was constructed" << std::endl;
}

Dog::Dog(std::string name)
{
	this->type = name;
	std::cout << "Dog " << type << "was constructed" << std::endl;
}

Dog::Dog(const Dog & src)
{
	*this = src;
	std::cout << "Dog was copy constructed" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog was destructed" << std::endl;
}

/*
--------------------OPERATOR----------------------------------------
*/

Dog	& Dog::operator=(const Dog &src)
{
	this->type = src.type;
	return (*this);
}

/*
--------------------FUNCTION----------------------------------------
*/
void	Dog::makeSound() const
{
	std::cout << "Woaf waf woaf" << std::endl;
}
