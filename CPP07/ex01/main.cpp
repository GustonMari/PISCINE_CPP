/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:34:24 by gmary             #+#    #+#             */
/*   Updated: 2022/06/07 18:55:30 by gmary            ###   ########.fr       */
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
*/

# include <iostream>
# include <string>

template <typename T, typename F>
void	iter(T *tab, size_t size, F (*f)(T &))
{
	for (size_t i = 0; i < size; i++)
		f(tab[i]);
}

template <typename T> void print(T &s)
{
	std::cout << s << std::endl;
}

template <typename T> void square(T &i)
{
	i *= i;
}

int main()
{
		int		tab[5] = {1, 2, 3, 4, 5};
		
		::iter<int,void>(tab, 5, &print);
	
	std::cout << "TEST 2------------------------------" << std::endl;
	
		double	tab2[5] = {1, 2, 3, 4, 5};
		
		::iter<double,void>(tab2, 5, &square);
		::iter<double,void>(tab2, 5, &print);
	
	std::cout << "TEST 3------------------------------" << std::endl;
	
		std::string str[2] = {"hello toi", "la forme chacal"};
		
		::iter<std::string, void>(str, 2, &print);
	return 0;
}