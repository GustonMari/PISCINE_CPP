/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 11:08:58 by gmary             #+#    #+#             */
/*   Updated: 2022/04/28 07:26:03 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
---------------------------------CONSTRUCTOR-------------------------------------
*/

FragTrap::FragTrap(): ClapTrap()
{
	hit_point = 100;
	energy_point = 100;
	attack_damage = 30;
	std::cout << "FragTrap Constructor" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " Destructor" << std::endl;
}

FragTrap::FragTrap(const FragTrap & src) : ClapTrap(src)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	hit_point = 100;
	energy_point = 100;
	attack_damage = 30;
	std::cout << "FragTrap " << name << " Constructor" << std::endl;
}

/*
--------------------------------OPERATOR OVERLOAD-------------------------------------
*/

FragTrap & FragTrap::operator=(const FragTrap &src)
{
	ClapTrap::operator=(src);
	std::cout << "FragTrap = operator called!" << std::endl;
	return (*this);
}

/*
---------------------------------FUNCTION-------------------------------------
*/
void	FragTrap::attack(const std::string& target)
{
	if (hit_point <= 0 || energy_point <=0)
	{
		std::cout << "FragTrap has no point left" << std::endl;
		return ;
	}
	energy_point = energy_point - 1;
	std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
	//prochain exo inclure le liens entre attack et takedamage ??
}

void	FragTrap::highFivesGuys(void)
{
	if (hit_point <= 0 || energy_point <=0)
	{
		std::cout << "FragTrap has no point left for high five" << std::endl;
		return ;
	}
	energy_point = energy_point - 1;
	std::cout << "FragTrap " << _name << " High Five" <<std::endl;
}