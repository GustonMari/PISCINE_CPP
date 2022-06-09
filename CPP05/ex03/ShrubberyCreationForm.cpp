/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 10:36:16 by gmary             #+#    #+#             */
/*   Updated: 2022/06/09 14:41:27 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

//!------------------------------CONSTRUCTOR----------------------------------

ShrubberyCreationForm::ShrubberyCreationForm(): Form("NO NAME", 145, 137)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form(target, 145, 137)
{

}

//ShrubberyCreationForm(const ShrubberyCreationForm & src);
		
//!------------------------------DESTRUCTOR-----------------------------------

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}

//!------------------------------OPERATOR-------------------------------------

ShrubberyCreationForm	& ShrubberyCreationForm::operator=(const ShrubberyCreationForm & src)
{
	if (this != &src)
	{
		this->Form::operator=(src);
	}
	return (*this);
}

//!------------------------------FUNCTION-------------------------------------

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->Form::get_sign() == false)
		throw Form::NotSignedException();
	if (executor.getGrade() > this->Form::get_required_execute())
		throw Form::GradeTooLowException();
	std::string new_string;
	new_string.assign(Form::get_name());
	new_string.append("_shrubbery");
	std::ofstream file(new_string.c_str());
	file << "   x\n  xxx\n xxxxx\n   I" << std::endl;
	file.close();
}