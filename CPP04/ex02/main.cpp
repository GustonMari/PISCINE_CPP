/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:44:42 by gmary             #+#    #+#             */
/*   Updated: 2022/06/08 19:01:45 by gmary            ###   ########.fr       */
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
 It is common practice to make base class constructors protected. 
 When you have a pure-virtual function in your base class, 
 this is not required, as you wouldn't be able to instantiate it.

However, defining a non-pure virtual function in a base class is not considered good practice,
 but heavily depends on your use case and does not harm.

There isn't any disadvantage or side-effect. 
With a protected constructor you just tell other developers that your class is only intended to be used as a base.
https://www.geeksforgeeks.org/pure-virtual-functions-and-abstract-classes/
*/

//need to do set type, check copy et operator=   ------------------------------------------------------------------------------------

int main()
{
	int	i;

	std::cout << UMAG << "To check if animal cannot be instanciated supress the comment below" << CRESET << std::endl;
	//AAnimal is protected so it can't be instanciated
	//L'autre solution est de faire une fonction pure virtual ainsi la class devient abstraite
	//et on ne peut l'instantier
	//AAnimal A;
	//AAnimal A();
	//TEST LEAK MEMOMRY
	std::cout << UMAG << "First Test" << CRESET << std::endl;
	const AAnimal *doggy = new Dog();
	const AAnimal *catty = new Cat();
	delete catty;
	delete doggy;
	//TEST ARRAY AAnimal
	AAnimal *wild_animal[NUMBER_ANIMALS];
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
	return 0;
}

