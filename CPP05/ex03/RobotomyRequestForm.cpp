/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:03:36 by gmary             #+#    #+#             */
/*   Updated: 2022/06/09 14:40:57 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

//!------------------------------CONSTRUCTOR----------------------------------

RobotomyRequestForm::RobotomyRequestForm(): Form("NO TARGET", 72, 45)/* ,  _target("NO TARGET"), _signGrade(72), _execGrade(45) */
{
	std::cout << "RobotomyRequestForm has been constructed" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string name): Form(name, 72, 45)
{
	
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & src): Form(src)
{
	std::cout << "RobotomyRequestForm has been copied" << std::endl;
}

//!------------------------------DESTRUCTOR-----------------------------------

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm has been destructed" << std::endl;
}

//!------------------------------OPERATOR-------------------------------------

RobotomyRequestForm	& RobotomyRequestForm::operator=(const RobotomyRequestForm & src)
{
	if (this != & src)
	{
		this->Form::operator=(src);
	}
	return (*this);
}

//!------------------------------FUNCTION-------------------------------------

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (Form::get_sign() == false)
		throw Form::NotSignedException();
	if (executor.getGrade() > this->Form::get_required_execute())
		throw RobotomyRequestForm::NotPossibleToExecute();
	std::cout << "BZEEEEETZEETTT (Make some drilling noises)" << std::endl;
	srand(time(NULL));
	if (rand() % 100 < 50)
		std::cout << BGRN << Form::get_name() <<" has been robotomized successfully" CRESET << std::endl;
	else
		std::cout << BRED << Form::get_name() << " the robotomy failed" CRESET << std::endl;
}

//!------------------------------FUNCTION-------------------------------------

const char * RobotomyRequestForm::NotPossibleToExecute::what() const throw()
{
	return ("\e[1;33mImpossible to execute this form because of your grade\e[0m");
}