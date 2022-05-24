/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:49:52 by gmary             #+#    #+#             */
/*   Updated: 2022/05/24 16:18:30 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
	! CONSTRUCTOR
*/
Form::Form(): _name("NO NAME"), _sign(false), _required_sign(1), _required_execute(1)
{
	std::cout << "Form has been constructed" << std::endl;
}

Form::Form(const Form & src): _name(src._name), _sign(src._sign),
	_required_sign(src._required_sign), _required_execute(src._required_execute)
{
	std::cout << "Form has been copy constructed" << std::endl;
}

Form::~Form()
{
	std::cout << "Form has been destroyed" << std::endl; 
}

/*
	! OPERATOR OVERLOAD
*/

Form	& Form::operator=(const Form & src)
{
	this->_sign = src._sign;
	return (*this);
}

std::ostream	&	operator<<(std::ostream & os, Form const & src)
{
	os << BMAG "Form name: " << src._name << ", Signed: " << src._sign
	<< ", Required Grade to sign: " << src._required_sign << ", Required to execute: "
	<< src._required_execute << "." CRESET << std::endl;
	return (os);
}

/*
	! FUNCTION
*/

const std::string	Form::get_name(void) const
{
	return (_name);
}

bool				Form::get_sign(void) const
{
	return (_sign);
}
int			Form::get_required_sign(void) const
{
	return (_required_sign);
}
int			Form::get_required_execute(void) const
{
	return (_required_execute);
}