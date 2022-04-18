/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:39:55 by gmary             #+#    #+#             */
/*   Updated: 2022/04/18 15:10:01 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, std::string weapon)
{
	_name = name;
	_weapon.setType(weapon);
}

HumanA::~HumanA(void)
{
}

void	HumanA::attack(void)
{
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}
