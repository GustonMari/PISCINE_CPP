/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:51:39 by gmary             #+#    #+#             */
/*   Updated: 2022/04/28 13:00:13 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
--------------------CONSTRUCTOR----------------------------------------
*/

Cat::Cat()
{
	Animal::type = "Cat";
	std::cout << "Cat was constructed" << std::endl;
}

Cat::Cat(std::string name)
{
	this->type = name;
	std::cout << "Cat " << type << "was constructed" << std::endl;
}

Cat::Cat(const Cat & src)
{
	*this = src;
	std::cout << "Cat was copy constructed" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat was destructed" << std::endl;
}

/*
--------------------OPERATOR----------------------------------------
*/

Cat	& Cat::operator=(const Cat &src)
{
	this->Animal::type = src.Animal::type;
	this->type = src.type;
	return (*this);
}

/*
--------------------FUNCTION----------------------------------------
*/

void	Cat::makeSound() const
{
	std::cout << "Miiiiiiaaaouuuu" << std::endl;
}
