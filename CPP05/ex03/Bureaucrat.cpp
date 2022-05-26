/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:47:30 by gmary             #+#    #+#             */
/*   Updated: 2022/05/26 14:15:35 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
	! CONSTRUCTOR
*/

Bureaucrat::Bureaucrat(): _name("NO NAME")
{
	std::cout << UGRN "Bureaucrat was constructed" CRESET << std::endl;
	this->_grade = 150;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	this->_grade = grade;
	if (_grade < 1)
	{
		_grade = 1;
		throw Bureaucrat::GradeTooHighException();
	}
		
	if (_grade > 150)
	{
		_grade = 150;
		throw Bureaucrat::GradeTooLowException();
	}
	std::cout << UGRN "Bureaucrat "<< _name <<" grade " << _grade << " was constructed"  CRESET << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src): _name(src._name)
{
	this->_grade = src._grade;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << BRED "Bureaucrat " << _name << " grade " << _grade << " was destroyed" << CRESET << std::endl;
}

/*
	! OPERATOR OVERLOAD
*/

Bureaucrat	& Bureaucrat::operator=(Bureaucrat const & rhs)
{
	std::string* string_ptr = const_cast<std::string*>(&this->_name);
	*string_ptr = rhs._name;
	this->_grade = rhs._grade;
	return (*this);
}

std::ostream	& operator<<(std::ostream & os, Bureaucrat const & src)
{
	os << src._name << ", bureaucrat grade " << src._grade << "." << std::endl;
	return (os);
}

/*
	! FUNCTION
*/

std::string	Bureaucrat::getName(void) const
{
	return (_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void	Bureaucrat::incrementGrade(void)
{
	_grade--;
	if (_grade < 1 || _grade > 150)
	{
		_grade = 1;
		throw Bureaucrat::GradeTooHighException();
	}
}

void	Bureaucrat::decrementGrade(void)
{
	_grade++;
	if (_grade < 1 || _grade > 150)
	{
		_grade = 150;
		throw Bureaucrat::GradeTooLowException();
	}
}

void	Bureaucrat::executeForm(Form const & form) const
{
	form.execute(*this);
	std::cout << "Bureaucrat " << _name << " executes form " << form.get_name() << std::endl;
}
/*
	! GradeTooHighException
*/

const char	 * Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("\e[1;33mThe Grade is too high\e[0m");
}

/*
	! GradeTooLowException
*/

const char	 * Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("\e[1;33mThe Grade is too low\e[0m");
}