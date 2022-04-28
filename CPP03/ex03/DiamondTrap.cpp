/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 07:33:54 by gmary             #+#    #+#             */
/*   Updated: 2022/04/28 08:59:02 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*
---------------------------------CONSTRUCTOR-------------------------------------
*/


DiamondTrap::DiamondTrap(): name(ClapTrap::_name)
{
	ClapTrap::_name += "_clap_name";
	name = ClapTrap::_name;
	std::cout << "DiamondTrap "<< name <<" constructor" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "\e[1;32mDiamondTrap "<< name <<" was constructed\e[0m" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap & src)
{
	*this = src;
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
	this->name = src.name;
	return (*this);
}

/*
---------------------------------FUNCTION-------------------------------------
*/

	
	
/* void	DiamondTrap::attack(const std::string& target)
{
	if (hit_point <= 0 || energy_point <=0)
	{
		std::cout << "DiamondTrap has no point left" << std::endl;
		return ;
	}
	energy_point = energy_point - 1;
	std::cout << "DiamondTrap " << _name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
	//prochain exo inclure le liens entre attack et takedamage ??
}

void	DiamondTrap::takeDamage(unsigned int amount)
{
	if (hit_point <= 0 || energy_point <=0)
	{
		std::cout << "DiamondTrap has no point left" << std::endl;
		return ;
	}
	hit_point -= amount;
	std::cout << "DiamondTrap " << _name << " has taken " << amount << " points of damage!" << std::endl;
}

void	DiamondTrap::beRepaired(unsigned int amount)
{
	if (hit_point <= 0 || energy_point <=0)
	{
		std::cout << "DiamondTrap has no point left" << std::endl;
		return ;
	}
	energy_point = energy_point - 1;
	hit_point += amount;
	std::cout << "DiamondTrap " << _name << " get " << amount << " Hit point back" << std::endl;
} */