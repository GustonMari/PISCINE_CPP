/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:45:46 by gmary             #+#    #+#             */
/*   Updated: 2022/04/28 09:37:42 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
---------------------------------CONSTRUCTOR-------------------------------------
*/


ClapTrap::ClapTrap(): _name("init"), hit_point(10), energy_point(10), attack_damage(0)
{
	std::cout << "ClapTrap "<< _name << " constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), hit_point(10), energy_point(10), attack_damage(0)
{
	std::cout << "\e[1;32mClapTrap "<< name <<" was constructed\e[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & src)
{
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout << "\e[1;31mClapTrap "<< _name <<" has been destroyed\e[0m" << std::endl;
}

/*
---------------------------------OPERATOR OVERLOAD-------------------------------------
*/

ClapTrap	&ClapTrap::operator=(const ClapTrap & src)
{
	this->_name = src._name;
	this->hit_point = src.hit_point;
	this->energy_point = src.energy_point;
	this->attack_damage = src.attack_damage;
	return (*this);
}

/*
---------------------------------FUNCTION-------------------------------------
*/

	
	
void	ClapTrap::attack(const std::string& target)
{
	if (hit_point <= 0 || energy_point <=0)
	{
		std::cout << "ClapTrap has no point left" << std::endl;
		return ;
	}
	energy_point = energy_point - 1;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
	//prochain exo inclure le liens entre attack et takedamage ??
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hit_point <= 0 || energy_point <=0)
	{
		std::cout << "ClapTrap has no point left" << std::endl;
		return ;
	}
	hit_point -= amount;
	std::cout << "ClapTrap " << _name << " has taken " << amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hit_point <= 0 || energy_point <=0)
	{
		std::cout << "ClapTrap has no point left" << std::endl;
		return ;
	}
	energy_point = energy_point - 1;
	hit_point += amount;
	std::cout << "ClapTrap " << _name << " get " << amount << " Hit point back" << std::endl;
}