/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 09:33:51 by gmary             #+#    #+#             */
/*   Updated: 2022/06/01 11:05:04 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include "colors.h"
#include "stdlib.h"
# include <iostream>
# include <string>

void	identify(Base & p)
{
	if (dynamic_cast<A *>(&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(&p))
		std::cout << "C" << std::endl;
	else
				std::cout << BRED "Define your type please" CRESET << std::endl;
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << BRED "Define your type please" CRESET << std::endl;
}

Base * generate(void)
{
	srand(time(NULL));
	int n;
	Base *ret;

	n = rand() % 3;
	if (n == 0)
		ret = new A;
	else if (n == 1)
		ret = new B;
	else
		ret = new C;
	return (ret);
}

int main()
{
	//!RANDOM TEST + identify pointer
	std::cout << BMAG "------------------Random test-----------------------" CRESET << std::endl;
	Base *a;

	a = generate();
	identify(a);
	delete a;
	
	//!NO TYPE TEST
	std::cout << BMAG "------------------No type test-----------------------" CRESET << std::endl;
	Base *b;

	b = new Base;
	identify(b);
	delete b;
	//!identify ref TEST
	std::cout << BMAG "------------------Identify reference test-----------------------" CRESET << std::endl;
	A valref;
	Base & c = valref;
	identify(c);	
	return 0;
}