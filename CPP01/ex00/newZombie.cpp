/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 10:50:28 by gmary             #+#    #+#             */
/*   Updated: 2022/06/02 13:15:49 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"
#include <string>
#include <iostream>


Zombie* Zombie::newZombie(std::string name)
{
	Zombie* new_Zombie = new Zombie();
	new_Zombie->_name.assign(name);
	return (new_Zombie);
}