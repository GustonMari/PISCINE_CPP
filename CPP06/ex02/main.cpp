/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 09:33:51 by gmary             #+#    #+#             */
/*   Updated: 2022/06/01 10:10:52 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
# include <iostream>
# include <string>

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "unknow" << std::endl;
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
	Base *a;

	a = generate();
	delete a;
	return 0;
}