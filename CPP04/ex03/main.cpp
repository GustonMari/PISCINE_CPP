/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:03:28 by gmary             #+#    #+#             */
/*   Updated: 2022/05/19 17:27:28 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	getter de AMateria retourne une const ref de _type ce qui est bien pratique
	la fonction clone dans AMateria n'est pas a definir dans AMAteria.cpp car
	elle est pure
	Les méthodes virtuelles pures ont généralement 
	une déclaration ( signature ) et aucune définition ( implémentation ).
	ATTENTION lorsquon herite dune valeur protected la valeur ne pas pas etre init
	via linitialisation list mais par egalite!!
	AMateria est defini comme virtual public car il est present a la fois dans Cure
	et dans Ice
*/
#include "All.hpp"

int	 main(void)
{
	//IMateriaSource* src = new MateriaSource();
	//src->learnMateria(new Ice());
	//src->learnMateria(new Cure());
	//ICharacter* me = new Character("me");
	//AMateria* tmp;
	//tmp = src->createMateria("ice");
	//me->equip(tmp);
	//tmp = src->createMateria("cure");
	//me->equip(tmp);
	//ICharacter* bob = new Character("bob");
	//me->use(0, *bob);
	//me->use(1, *bob);
	//delete bob;
	//delete me;
	//delete src;
	return 0;
}