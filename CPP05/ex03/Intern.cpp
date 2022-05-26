/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:25:20 by gmary             #+#    #+#             */
/*   Updated: 2022/05/26 15:48:39 by gmary            ###   ########.fr       */
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

Form * Intern::makeShrubbery(std::string target)
{
	Form * form = new ShrubberyCreationForm(target);
	return form;
}

Form * Intern::makeRobotomyRequest(std::string target)
{
	Form * form = new RobotomyRequestForm(target);
	return form;
}

Form * Intern::makePresidentialPardon(std::string target)
{
	Form * form = new PresidentialPardonForm(target);
	return form;
}

Form * Intern::makeForm(std::string name, std::string target)
{
	Form * form;
	int	i;
	Form * (Intern::*ptr[3])(std::string) = {&Intern::makeShrubbery, &Intern::makeRobotomyRequest, &Intern::makePresidentialPardon};
	std::string form_name[3] = {"shrubbery request", "robotomy request", "presidential pardon request"};
	i = 0;
	while (i < 3)
	{
		if (name == form_name[i])
		{
			form = (this->*ptr[i])(target);
			std::cout << "Intern creates " << name << std::endl; 
			return form;
		}
		i++;
	}
	throw FormNotFoundException();
	return form;
}

//!------------------------------EXCEPTION-------------------------------------

const char * Intern::FormNotFoundException::what() const throw()
{
	return ("\e[1;33mForm not found\e[0m");
}