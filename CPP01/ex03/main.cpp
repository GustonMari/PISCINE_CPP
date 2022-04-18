/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:40:14 by gmary             #+#    #+#             */
/*   Updated: 2022/04/18 16:33:52 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

/*
	le fait davoir une référence sur l'objet Weapon dans human
	permet de le modifier via setType(), car on a cree une sorte
	dalias de lobjet Weapon ainsi quand weapon changera de type
	le weapon dans human sera aussi changer

	dans Human b on nutilise pas la reference car on ne peut 
	pas initialiser direct via le constructeur (consigne)
	on peut qunad mm mettre le pointeur a NULL a dans le constructor 
	au depart
*/

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
return 0;
}

/* int main(void)
{
	HumanA	Human_A("Marlo", "AK-47");
	Human_A.attack();
	HumanB	Human_B("Omar");
	Human_B.set_weapon_humanb("Rocket Launcher");
	Human_B.attack();
	return (0);
} */