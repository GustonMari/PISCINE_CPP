/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 10:49:33 by gmary             #+#    #+#             */
/*   Updated: 2022/04/15 17:15:17 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

/* 
Only static functions are called with class name:
classname::Staicfunction();
->cest pq ici je mets en static newZobiedans ma classe


Non static functions have to be called using objects:
classname obj;
obj.Somefunction();

*/



int	main(void)
{
	std::string	str;
	Zombie* new_Zombie = NULL; // = Zombie::newZombie("Gustave");;

	str.assign("Gustave");
	new_Zombie = Zombie::newZombie(str);
	new_Zombie->announce();
	delete new_Zombie;
	Zombie::randomChump("Marco");
	return (0);
}