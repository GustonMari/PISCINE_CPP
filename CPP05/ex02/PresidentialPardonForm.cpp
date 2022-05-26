/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:37:09 by gmary             #+#    #+#             */
/*   Updated: 2022/05/26 11:29:05 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

//!------------------------------CONSTRUCTOR----------------------------------

PresidentialPardonForm::PresidentialPardonForm() : Form("NO NAME", 25, 5)
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & src) : Form(src)
{

}

//!------------------------------DESTRUCTOR-----------------------------------

PresidentialPardonForm::~PresidentialPardonForm()
{
	
}

//!------------------------------OPERATOR-------------------------------------

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & src)
{
	this->Form::operator=(src);
	return (*this);
}

//!------------------------------FUNCTION-------------------------------------

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (Form::get_sign() == false)
		throw Form::NotSignedException();
	if (executor.getGrade() > this->Form::get_required_execute())
		throw Form::GradeTooLowException();
	std::cout << BMAG << Form::get_name() << " has been pardoned by Zafod Beeblebrox." CRESET << std::endl;
}