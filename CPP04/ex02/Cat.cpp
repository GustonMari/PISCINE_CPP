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

Cat::Cat(): attribute(new Brain())
{
	AAnimal::type = "Cat";
	std::cout << "Cat was constructed" << std::endl;
}

/* Cat::Cat(std::string name): attribute(new Brain())
{
	this->type = name;
	std::cout << "Cat " << type << "was constructed" << std::endl;
} */

Cat::Cat(const Cat & src): AAnimal(src)
{
	attribute = new Brain();
	*this = src;
	std::cout << "Cat was copy constructed" << std::endl;
}

Cat::~Cat()
{
	if (attribute)
		delete attribute;
	std::cout << "Cat was destructed" << std::endl;
}

/*
--------------------OPERATOR----------------------------------------
*/

Cat	& Cat::operator=(const Cat &src)
{
	if (this != &src)
	{
		this->AAnimal::type = src.AAnimal::type;
		delete (this->attribute);
		this->attribute = new Brain();
		for (int i = 0; i < 100; i++)
			this->attribute->set_ideas(i, src.attribute->get_ideas(i));
	}
	return (*this);
}

/*
--------------------FUNCTION----------------------------------------
*/

void	Cat::makeSound() const
{
	std::cout << "Miiiiiiaaaouuuu" << std::endl;
}
