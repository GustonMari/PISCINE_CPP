/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:11:39 by gmary             #+#    #+#             */
/*   Updated: 2022/05/19 11:10:24 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "All.hpp"

/*
	CONSTRUCTOR
*/

Ice::Ice()
{
	std::cout << UBLU "Ice was constructed"  CRESET << std::endl;
}

Ice::Ice(Ice const & src)
{
	std::cout << UBLU "Ice was copy constructed"  CRESET << std::endl;
	*this = src;
}

Ice::~Ice()
{
	std::cout << UBLU "Ice was Destructed" CRESET << std::endl;
}

/*
	OPERATOR OVERLOAD
*/
Ice	Ice::&operator=(Ice const & rhs)
{
	//??????
}

/*
	FUNCTION
*/
