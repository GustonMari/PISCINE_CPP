/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 07:33:54 by gmary             #+#    #+#             */
/*   Updated: 2022/06/02 17:46:22 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*
---------------------------------CONSTRUCTOR-------------------------------------
*/


DiamondTrap::DiamondTrap(): name(ClapTrap::_name)
{
	ClapTrap::_name += "_clap_name";
	this->hit_point = FragTrap::hit_point;
	this->energy_point = ScavTrap::energy_point;
	this->attack_damage = FragTrap::attack_damage;
	std::cout << "DiamondTrap "<< name <<" constructor" << std::endl;
}

DiamondTrap::DiamondTrap(std::string new_name): name(new_name)
{
	ClapTrap::_name = new_name;
	ClapTrap::_name += "_clap_name";
	this->hit_point = FragTrap::hit_point;
	this->energy_point = ScavTrap::energy_point;
	this->attack_damage = FragTrap::attack_damage;
	std::cout << "\e[1;32mDiamondTrap "<< name <<" was constructed\e[0m" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap & src): ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	this->name = src.name;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "\e[1;31mDiamondTrap "<< DiamondTrap::name <<" has been destroyed\e[0m" << std::endl;
}

/*
---------------------------------OPERATOR OVERLOAD-------------------------------------
*/

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap & src)
{
	ScavTrap::operator=(src);
	FragTrap::operator=(src);
	this->name = src.name;
	return (*this);
}

/*
---------------------------------FUNCTION-------------------------------------
*/

void DiamondTrap::whoAmI(void)
{
	std::cout << "Name : " << name << std::endl;
	std::cout << "ClapTrap name :" << ClapTrap::_name << std::endl;
}