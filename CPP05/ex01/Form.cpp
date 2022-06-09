/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:49:52 by gmary             #+#    #+#             */
/*   Updated: 2022/06/09 14:10:58 by gmary            ###   ########.fr       */
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

Form::Form(std::string name, int required_sign, int required_execute): 
	_name(name), _sign(false), _required_sign(required_sign), _required_execute(required_execute)
{
	if (_required_sign < 1 || _required_execute < 1)
		throw GradeTooHighException();
	if (_required_execute > 150 || _required_sign > 150)
		throw GradeTooLowException();
	std::cout << "Form " << _name << ", Required Sign: " << _required_sign
	<< ", Required Execute: " << _required_execute << " has been constructed" << std::endl;
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
	if (this != &src)
	{
		std::string* string_ptr = const_cast<std::string*>(&this->_name);
		int *int_ptr = const_cast<int*>(&this->_required_sign);
		int *int_ptr2 = const_cast<int*>(&this->_required_execute);
		
		*string_ptr = src._name;
		this->_sign = src._sign;
		*int_ptr = src._required_sign;
		*int_ptr2 = src._required_execute;
	}
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

void	Form::beSigned(Bureaucrat const & src)
{
	if (src.getGrade() <= _required_sign)
		_sign = true;
	else
		throw Form::GradeTooLowException();
}

void	Form::signForm(Bureaucrat const & src)
{
	if (_sign == true)
	{
		std::cout<< BGRN << src.getName() << " signed " << _name << CRESET << std::endl;
	}
	else if (_sign == false && (src.getGrade() > _required_sign))
	{
		std::cout << BRED << src.getName() << " couldn’t sign "<< _name <<" because " << " Grade is to low" << "." CRESET << std::endl;
	}
	else if (_sign == false)
	{
		std::cout << BRED << src.getName() << " couldn’t sign "<< _name <<" because " << "it need a signature" << "." CRESET << std::endl;
	}
}

/*
	! GradeTooHighException
*/

const char	 * Form::GradeTooHighException::what() const throw()
{
	return ("\e[1;33mThe Grade is too high\e[0m");
}

/*
	! GradeTooLowException
*/

const char	 * Form::GradeTooLowException::what() const throw()
{
	return ("\e[1;33mThe Grade is too low\e[0m");
}