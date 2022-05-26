/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:25:20 by gmary             #+#    #+#             */
/*   Updated: 2022/05/26 14:17:06 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

//!------------------------------CONSTRUCTOR----------------------------------
Intern::Intern()
{
}

Intern::Intern(Intern const & src)
{
	*this = src;
}

//!------------------------------DESTRUCTOR-----------------------------------

Intern::~Intern()
{
	
}

//!------------------------------OPERATOR-------------------------------------

Intern  & Intern::operator=(Intern const & rhs)
{
	//TODO : check if it's the same object
	(void)rhs;
	return *this;
}




//!------------------------------FUNCTION-------------------------------------