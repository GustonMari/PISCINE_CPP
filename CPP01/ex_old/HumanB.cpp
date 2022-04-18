/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:40:04 by gmary             #+#    #+#             */
/*   Updated: 2022/04/18 15:29:56 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name): _name(name)
{
}

HumanB::~HumanB()
{
}

void	HumanB::attack(void)
{
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}

void	HumanB::set_weapon_humanb(std::string weapon)
{
	_weapon.setType(weapon);
}
