/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:57:08 by gmary             #+#    #+#             */
/*   Updated: 2022/06/08 17:24:49 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	on doit ajouter les constructeur car on herite jamais des constructeur
1	Input Iterator	Can scan the container forward only once, can't change the value it points to (read-only);
2	Output Iterator	Can scan the container forward only once, can't read the value it points to (write-only);
3	Forward Iterator	Can scan the container forward multiple times, can read and write the value it points to;
4	Bidirectional Iterator	Same as previous one but can scan the container back and forth;
5	Random Access Iterator	Same as previous one but can access the container also non-sequentially (i.e. by jumping around);
6	Contiguous Iterator	Same as previous one, with the addition that logically adjacent elements are also physically adjacent in memory.

	si une variable est declare mutable aors elle serra modifiable si oon le veut dans une focntion const
	
	std::ptrdiff_test (cest un inetger signe)utilisé pour l'arithmétique des pointeurs et l'indexation des tableaux,
	il peut stocker la taille du tableau de n'importe quel type et est, sur la plupart des plates-formes, synonyme de std::intptr_t .
	
	typedef typename _MyBase::value_type value_type;
	typedef is defining a new type for use in your code, like a shorthand.
	typename here is letting the compiler know that value_type is a type and not a static member of _MyBase.

	this->c correspond au container sousjascent
*/

# include <iostream>
# include <string>
# include <vector>
#include <algorithm>
# include "MutantStack.hpp"
# include "MutantStack.tpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}