/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:13:44 by gmary             #+#    #+#             */
/*   Updated: 2022/04/21 10:14:41 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Fixed.hpp"

/*
	fixed point arithmetic is much faster than floating point arithmetic.
*/

int main( void ) 
{
	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return (0);
}
