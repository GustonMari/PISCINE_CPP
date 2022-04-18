/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:40:14 by gmary             #+#    #+#             */
/*   Updated: 2022/04/18 15:32:11 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
//#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	HumanA	Human_A("Marlo", "AK-47");
	Human_A.attack();
	HumanB	Human_B("Omar");
	Human_B.set_weapon_humanb("Rocket Launcher");
	Human_B.attack();
	return (0);
}