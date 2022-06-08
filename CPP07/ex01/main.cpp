/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:34:24 by gmary             #+#    #+#             */
/*   Updated: 2022/06/08 16:22:32 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Templates are expanded at compiler time. 
This is like macros. 
The difference is, the compiler does type checking before template expansion.
The idea is simple, source code contains only function/class, 
but compiled code may contain multiple copies of same function/class. 

-> emplate <class T, class U = char> class A 
A<char> a; // This will call A<char, char>
#define debug(…)   fprintf(stderr, __VA_ARGS__)
#define eprintf(format, ...) fprintf (stderr, format, __VA_ARGS__)
-> La spécialisation proprement dite est toujours un modèle sur le type désigné ou référencé.
https://docs.microsoft.com/fr-fr/cpp/cpp/template-specialization-cpp?view=msvc-170
https://www.geeksforgeeks.org/templates-cpp/
https://www.geeksforgeeks.org/template-specialization-c/

	::iter<int,void>(tab, 5, &print); les doubles point permettent d'avoir
*/

# include <iostream>
# include <string>
# include "Iter.tpp"

int main()
{
		int		tab[5] = {1, 2, 3, 4, 5};

		
		iter(tab, 5, print_tab<int>);
	
	std::cout << "TEST 2------------------------------" << std::endl;
	
		double	tab2[5] = {1, 2, 3, 4, 5};
		
		iter(tab2, 5, square<double>);
		iter(tab2, 5, print_tab<double>);
	
	std::cout << "TEST 3------------------------------" << std::endl;
	
		std::string str[2] = {"hello toi", "la forme chacal"};
		
		iter(str, 2, print_tab<std::string>);
	std::cout << "TEST 4------------------------------" << std::endl;
		
		int	const	tab_const[5] = {1, 2, 3, 4, 5};
		iter(tab_const, 5, print_const<int>);
		
	return 0;
}
