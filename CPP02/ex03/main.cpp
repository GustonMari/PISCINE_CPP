/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:13:44 by gmary             #+#    #+#             */
/*   Updated: 2022/04/25 17:47:47 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Fixed.hpp"
#include "Point.hpp"

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
	http://totologic.blogspot.com/2014/01/accurate-point-in-triangle-test.html
*/

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int main( void )
{
	Point	a(0, 0);
	Point	b(20, 0);
	Point	c(0, 20);
	Point	outside(0, -3);
	Point	inside(3, 3);
	if (bsp(a, b, c, outside) == false)
		std::cout << "The point is outside the triangle" << std::endl;
	else
		std::cout << "The point is inside the triangle" << std::endl;
	return 0;
}
