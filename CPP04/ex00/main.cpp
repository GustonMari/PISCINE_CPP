/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:44:42 by gmary             #+#    #+#             */
/*   Updated: 2022/06/08 18:45:36 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
/*
	ATTENTION: lorsque on a une fonction virtual
	il nous faut un destructeur virtuel aussi, cela a avoir avec l'allocation
	you HAVE TO provide a definition for destructors, even if they are pure virtual.
*/

//need to do set type, check copy et operator= voir si lond doit inclure une string en protected dans cat et dog

int main()
{
	const WrongAnimal* meta = new WrongAnimal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the wrong cat sound!
	j->makeSound();
	meta->makeSound();
	
	delete	meta;
	delete	i;
	delete	j;
	return 0;
}

/* int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
Cat catounet("catounet");
Cat copy_cat(catounet);
Cat equal_cat;
equal_cat = copy_cat;
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << copy_cat.getType() << " " << std::endl;
std::cout << "equal cat:" << equal_cat.getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();

delete	meta;
delete	i;
delete	j;
return 0;
} */