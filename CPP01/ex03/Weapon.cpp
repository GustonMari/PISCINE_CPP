/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:40:17 by gmary             #+#    #+#             */
/*   Updated: 2022/04/18 15:55:36 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type)
{
}

Weapon::~Weapon(void)
{
}

void	Weapon::setType(std::string type)
{
	_type = type;
}

std::string	const &Weapon::getType(void)
{
	std::string	const &strRef = _type;
	return strRef;
}
