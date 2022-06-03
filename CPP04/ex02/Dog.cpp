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
	AAnimal::type = "Dog";
	attribute = new Brain();
	std::cout << "Dog was constructed" << std::endl;
}

/* Dog::Dog(std::string name)
{
	this->type = name;
	attribute = new Brain();
	std::cout << "Dog " << type << "was constructed" << std::endl;
} */

Dog::Dog(const Dog & src): AAnimal(src)
{
	attribute = new Brain();
	*this = src;
	std::cout << "Dog was copy constructed" << std::endl;
}

Dog::~Dog()
{
	delete attribute;
	std::cout << "Dog was destructed" << std::endl;
}

/*
--------------------OPERATOR----------------------------------------
*/

//TODO: voir pour ca
Dog & Dog::operator=(const Dog & src)
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
void	Dog::makeSound() const
{
	std::cout << "Woaf waf woaf" << std::endl;
}
