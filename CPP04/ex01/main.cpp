/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:44:42 by gmary             #+#    #+#             */
/*   Updated: 2022/06/03 11:16:31 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"
# include "colors.h"
# define NUMBER_ANIMALS 6
/*
	ATTENTION: lorsque on a une fonction virtual
	il nous faut un destructeur virtuel aussi, cela a avoir avec l'allocation
	you HAVE TO provide a definition for destructors, even if they are pure virtual.

= 0 means derived classes must provide an implementation, not that the base class can not provide an implementation.

In practice, when you mark a virtual function as pure (=0), there is very little point in providing a definition,
 because it will never be called unless someone explicitly does so via Base::Function(...) or if the Base class constructor calls the virtual function in question

	TO DO : passer par une fonction virtuel pour recuperer le brain de animals contenue dans cat et dog
	https://www.linkedin.com/pulse/why-do-we-need-virtual-destructors-joydip-kanjilal
*/

//TODO: exercice broken faire un deep copy pour l'assignation

int main()
{
	int	i;
	//TEST LEAK MEMOMRY
	std::cout << UMAG << "First Test" << CRESET << std::endl;
	const Animal *doggy = new Dog();
	const Animal *catty = new Cat();
	delete catty;
	delete doggy;
	//TEST ARRAY ANIMAL
	Animal *wild_animal[NUMBER_ANIMALS];
	std::cout << UMAG << "Second Test" << CRESET << std::endl;
	i = 0;
	while (i < NUMBER_ANIMALS)
	{
		if (i % 2 == 0)
			wild_animal[i] = new Dog();
		else
			wild_animal[i] = new Cat();
		i++;
	}
	i = 0;
	while (i < NUMBER_ANIMALS)
	{
		std::cout << BGRN << wild_animal[i]->getType() << CRESET << std::endl;
		delete wild_animal[i];
		i++;
	}
	std::cout << UMAG << "Third Test: deep copy test" << CRESET << std::endl;
	std::cout << UCYN << "crazy man" << CRESET << std::endl;
	Brain	crazy_man;
	crazy_man.set_ideas(0, "Suis-je fou ?");
	crazy_man.set_ideas(1, "mais qui suis je?");
	crazy_man.set_ideas(2, "tu as dis quoi ?");
	crazy_man.show_ideas();
	std::cout << UCYN << "normal man" << CRESET << std::endl;
	Brain	normal_man(crazy_man);
	normal_man.show_ideas();
	std::cout << UCYN << "weird man" << CRESET << std::endl;
	Brain	weird_man;
	weird_man = normal_man;
	weird_man.show_ideas();
	Cat	basic;
	{
		Cat tmp = basic;
	}
	return 0;
}

/* int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();

delete	meta;
delete	i;
delete	j;
return 0;
} */