/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:10:00 by gmary             #+#    #+#             */
/*   Updated: 2022/04/27 10:45:05 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
---------------------------------CONSTRUCTOR-------------------------------------
*/

ScavTrap::ScavTrap(): ClapTrap(), gate_keeper(false)
{
	hit_point = 100;
	energy_point = 50;
	attack_damage = 20;
	std::cout << "ScavTrap Constructor" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " Destructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & src) : ClapTrap(src), gate_keeper(false)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name), gate_keeper(false)
{
	hit_point = 100;
	energy_point = 50;
	attack_damage = 20;
	std::cout << "ScavTrap " << name << " Constructor" << std::endl;
}

/*
--------------------------------OPERATOR OVERLOAD-------------------------------------
*/

ScavTrap & ScavTrap::operator=(const ScavTrap &src)
{
	ClapTrap::operator=(src);
	this->gate_keeper = src.gate_keeper;
	std::cout << "ScavTrap = operator called!" << std::endl;
	return (*this);
}

/*
---------------------------------FUNCTION-------------------------------------
*/
void	ScavTrap::attack(const std::string& target)
{
	if (hit_point <= 0 || energy_point <=0)
	{
		std::cout << "ScavTrap has no point left" << std::endl;
		return ;
	}
	energy_point = energy_point - 1;
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
	//prochain exo inclure le liens entre attack et takedamage ??
}

void	ScavTrap::guardGate(void)
{
	if (hit_point <= 0 || energy_point <=0)
	{
		std::cout << "ScavTrap has no point left for guard gate" << std::endl;
		gate_keeper = false;
		return ;
	}
	energy_point = energy_point - 1;
	gate_keeper = true;
	std::cout << "ScavTrap " << _name << " guard gate!" <<std::endl;
}