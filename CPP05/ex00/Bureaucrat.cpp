/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:47:30 by gmary             #+#    #+#             */
/*   Updated: 2022/05/24 18:07:51 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
	! CONSTRUCTOR
*/

Bureaucrat::Bureaucrat(): _name("NO NAME")
{
	std::cout << UGRN "Bureaucrat was constructed" CRESET << std::endl;
	try
	{
		this->_grade = 150;
		if (_grade < 1)
			throw Bureaucrat::GradeTooHighException();
		if (_grade > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch(GradeTooHighException & e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(GradeTooLowException & e)
	{
		std::cerr << e.what() << '\n';
	}
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	try
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
			
	}
	catch(GradeTooHighException & e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(GradeTooLowException & e)
	{
		std::cerr << e.what() << '\n';
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
	// WARNING que faie pour le _name ????
	//this->_name = rhs._name;
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
	try
	{
		_grade--;
		if (_grade < 1 || _grade > 150)
		{
			_grade = 1;
			throw Bureaucrat::GradeTooHighException();
		}
	}
	catch(GradeTooHighException & e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	Bureaucrat::decrementGrade(void)
{

		try
	{
		_grade++;
		if (_grade < 1 || _grade > 150)
		{
			_grade = 150;
			throw Bureaucrat::GradeTooLowException();
		}
	}
	catch(GradeTooLowException & e)
	{
		std::cerr << e.what() << std::endl;
	}
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