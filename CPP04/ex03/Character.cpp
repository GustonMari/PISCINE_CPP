/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:14:06 by gmary             #+#    #+#             */
/*   Updated: 2022/05/20 16:00:53 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "All.hpp"

/*
	CONSTRUCTOR
*/

Character::Character()
{
	std::cout << UGRN "Character was constructed"  CRESET << std::endl;
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
	this->_inventory_size = 0;
	this->name = "NO NAME";
}

Character::Character(std::string new_name)
{
	std::cout << UGRN "Character was constructed"  CRESET << std::endl;
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
	this->_inventory_size = 0;
	this->name = new_name;
}

Character::Character(Character const & src)
{
	std::cout << UGRN "Character was copy constructed" CRESET << std::endl;
	*this = src;
}

Character::~Character()
{
	std::cout << UGRN "Character was destructed" CRESET << std::endl;
}

/*
	OPERATOR OVERLOAD
*/

Character & Character::operator=(Character const & rhs)
{
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = rhs._inventory[i];
	}
	this->_inventory_size = rhs._inventory_size;
	this->name = rhs.name;
	return (*this);
}

/*
	FUNCTION
*/

std::string const & Character::getName(void) const
{
	//
	return (this->name);
}

void	Character::use(int idx	, ICharacter & target)
{
	if (idx < 0 || idx >= this->_inventory_size)
		return ;
	(void)target;
	(void)idx;

	std::cout << _inventory[idx]->getType() << std::endl;
	std::cout << target.getName() << std::endl;
	//_inventory[idx]->use(target);
}

void	Character::equip(AMateria *m)
{
	if (this->_inventory_size < 4)
	{
		_inventory[this->_inventory_size] = m;
		this->_inventory_size++;
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= _inventory_size)
		return ;
	_inventory[idx] = NULL;
	_inventory_size--;
}