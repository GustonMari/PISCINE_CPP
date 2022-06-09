/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:03:28 by gmary             #+#    #+#             */
/*   Updated: 2022/06/09 09:58:03 by gmary            ###   ########.fr       */
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
	void		AMateria::use(__attribute__((unused)) ICharacter & target)
	{
		std::cout << BMAG "USING MATERIA" CRESET << std::endl;
	}

	__attribute__((unused)) ici indique au compilateur au tout depart que target 
	n'est pas utiliser
	 char *buffer __attribute__ ((__cleanup__(free_buffer))) = malloc(20);
	FILE *fp __attribute__ ((__cleanup__(cleanup_file)));
	https://echorand.me/site/notes/articles/c_cleanup/cleanup_attribute_c.html
	https://www.learncpp.com/cpp-tutorial/virtual-base-classes/
*/
#include "All.hpp"

int	 main(void)
{
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
		//! Deep copy
		Character john("john");
		Character jim(john);
		{
			Character Tim = jim;
		}
	}

/* 	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		Character* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		Character* bob = new Character(*me);
		bob->use(0, *bob);
		me->use(0, *bob);
	} */
	return 0;
}

/* 
int	 main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	(void)me;
	(void)src;
	(void)tmp;
	me->use(0, *bob);
	//me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
} */