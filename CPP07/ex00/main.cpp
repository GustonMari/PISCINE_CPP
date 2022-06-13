/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:23:40 by gmary             #+#    #+#             */
/*   Updated: 2022/06/13 14:58:19 by gmary            ###   ########.fr       */
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
# include "whatever.hpp"

template <typename T> void swap(T & s1, T & s2)
{
	T	tmp;

	tmp = s1;
	s1 = s2;
	s2 = tmp;
}

template <typename T> T min(T nb1, T nb2)
{
	return ((nb1 < nb2) ? nb1 : nb2);
}

template <typename T> T max(T nb1, T nb2)
{
	return ((nb1 > nb2) ? nb1 : nb2);
}

int main( void )
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}

/* int main()
{
	int	nb1 = 2;
	int	nb2 = 10;
	swap<int>(nb1, nb2);
	std::cout << "nb1= " << nb1 << ", nb2= " << nb2 << std::endl;

	double	num1 = 4.15;
	double	num2 = 4.11;
	std::cout << "min= " << min<double>(num1, num2) << std::endl;

	float	numb1 = 3000.15;
	float	numb2 = 245.11;
	std::cout << "min= " << max<float>(numb1, numb2) << std::endl;

	std::string	str1 = "salut ca va";
	std::string str2 = "Hola que tal ?";

	::swap<std::string>(str1, str2);
	std::cout << "str1= " << str1 << std::endl;
	std::cout << "str2= " << str2 << std::endl;
	return 0;
} */