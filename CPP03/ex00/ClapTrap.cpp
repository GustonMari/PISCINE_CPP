/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:45:46 by gmary             #+#    #+#             */
/*   Updated: 2022/04/26 14:17:51 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
---------------------------------CONSTRUCTOR-------------------------------------
*/


ClapTrap::ClapTrap()
{
	
}

ClapTrap::ClapTrap(std::string name): _name(name), hit_point(10), energy_point(10), attack_dommage(0)
{
	
}

ClapTrap::ClapTrap(const ClapTrap & src)
{
	*this = src;
}

ClapTrap::~ClapTrap()
{
	
}

/*
---------------------------------OPERATOR OVERLOAD-------------------------------------
*/

ClapTrap	&ClapTrap::operator=(const ClapTrap & src)
{
	this->_name = src._name;
	this->hit_point = src.hit_point;
	this->energy_point = src.energy_point;
	this->attack_dommage = src.attack_dommage;
	return (*this);
}

/*
---------------------------------FUNCTION-------------------------------------
*/