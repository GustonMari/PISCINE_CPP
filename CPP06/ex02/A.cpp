/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 09:35:14 by gmary             #+#    #+#             */
/*   Updated: 2022/06/01 09:36:04 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "A.hpp"

//!------------------------------CONSTRUCTOR----------------------------------

A::A()
{

}

A::A(const A& copy)
{
	*this = copy;
}

//!------------------------------DESTRUCTOR-----------------------------------

A::~A()
{

}

//!------------------------------OPERATOR-------------------------------------

A	&	A::operator=(const A& copy)
{
	return(*this);
}

//!------------------------------FUNCTION-------------------------------------