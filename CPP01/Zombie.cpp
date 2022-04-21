/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 10:50:10 by gmary             #+#    #+#             */
/*   Updated: 2022/04/15 14:02:59 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

//Zombie* newZombie( std::string name );

Zombie* newZombie( std::string name )
{
	
	//Zombie* newZombie = new Zombie();
	//newZombie->_name = name;
	//return newZombie;
}

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(void)
{
	std::cout << _name << "Zombie has been created" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << _name << "Zombie has been destroyed" << std::endl;
}