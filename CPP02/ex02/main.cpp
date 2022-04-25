/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:13:44 by gmary             #+#    #+#             */
/*   Updated: 2022/04/25 16:17:37 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Fixed.hpp"

/*
	fixed point arithmetic is much faster than floating point arithmetic.
	int equivaut a 8 bits
	https://docs.microsoft.com/fr-fr/cpp/standard-library/overloading-the-output-operator-for-your-own-classes?view=msvc-170
	https://askcodez.com/la-surcharge-de-c-operateur-dinsertion.html
	friend Point& operator++( Point& );      // Prefix increment
	friend Point operator++( Point&, int );  // Postfix increment
	friend Point& operator--( Point& );      // Prefix decrement
	friend Point operator--( Point&, int );  // Postfix decrement
	mutable int var; //veut dire que mm dans une const fonction on peut la modifier
	attention les operateurs ++ et -- ne sont pas const car ils agissent sur lobjet actuelle
	pour le post incrementation on a en argument int pour signifier au compilo quon est bien en post
	ATTENTION on doit passer par toFloat pour add, multi, div car on veut le resultat en float alors que si on veut juste ++ on aurra juste a ajoute un donc le la
	partie decimal serra toujours intact
*/

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
