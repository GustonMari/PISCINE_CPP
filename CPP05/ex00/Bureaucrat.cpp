/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:47:30 by gmary             #+#    #+#             */
/*   Updated: 2022/05/23 17:38:47 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
	CONSTRUCTOR
*/

Bureaucrat::Bureaucrat(): _name("NO NAME")
{
	std::cout << UGRN "Bureaucrat was constructed" CRESET << std::endl;
	this->_grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	//WARNING faire securite pour NAME ET GRADE
	this->_grade = grade;
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
	OPERATOR OVERLOAD
*/

Bureaucrat	& Bureaucrat::operator=(Bureaucrat const & rhs)
{
	// WARNING que faie pour le _name ????
	this->_grade = rhs._grade;
	return (*this);
}

/*
	FUNCTION
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
	//WARNING FAIRE la gestion d'erreur
	_grade--;
}

void	Bureaucrat::decrementGrade(void)
{
	//WARNING FAIRE la gestion d'erreur
	_grade++;
}