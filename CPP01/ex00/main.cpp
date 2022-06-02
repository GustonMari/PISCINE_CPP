/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 10:49:33 by gmary             #+#    #+#             */
/*   Updated: 2022/06/02 13:15:35 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

/* 
Only static functions are called with class name:
classname::Staicfunction();
->cest pq ici je mets en static newZobie dans ma classe


Non static functions have to be called using objects:
classname obj;
obj.Somefunction();


Super interessant on peut definir plusieurs constructeurs
dans un mm fichier la salection de celui qui sera appelé
depend de la valeur de l'argument passé au constructeur
on peut ainsi avoir ceci:
Zombie::Zombie(void);
Zombie::Zombie(std::string name); => super utile par exemple pour avoir acce a mes valeur prive 
via linitialisation list
Zombie::Zombie(std::string name): _name(name);

*/



int	main(void)
{
	std::string	str;
	Zombie* new_Zombie = NULL;

	str.assign("Gustave");
	new_Zombie = Zombie::newZombie(str);
	new_Zombie->announce();
	delete new_Zombie;
	Zombie::randomChump("Marco");
	return (0);
}