/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:51:39 by gmary             #+#    #+#             */
/*   Updated: 2022/04/28 12:57:49 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal was constructed" << std::endl;
}

Animal::Animal(std::string name)
{
	this->type = name;
	std::cout << "Animal " << type << "was constructed" << std::endl;
}

Animal::Animal(const Animal & src)
{
	*this = src;
	std::cout << "Animal was copy constructed" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal was destructed" << std::endl;
}