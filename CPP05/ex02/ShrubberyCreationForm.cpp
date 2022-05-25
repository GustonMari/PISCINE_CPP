/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 10:36:16 by gmary             #+#    #+#             */
/*   Updated: 2022/05/25 14:06:36 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

//!------------------------------CONSTRUCTOR----------------------------------
ShrubberyCreationForm::ShrubberyCreationForm()
{
	//this->_name = "ShrubberyCreationForm";
	this->_target = "";
	this->_signGrade = 145;
	this->_execGrade = 137;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
{
	//this->_name = name;
	this->_target = target;
	this->_signGrade = 145;
	this->_execGrade = 137;
}

//ShrubberyCreationForm(const ShrubberyCreationForm & src);
		
//!------------------------------DESTRUCTOR-----------------------------------
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}
//!------------------------------OPERATOR-------------------------------------
ShrubberyCreationForm	& ShrubberyCreationForm::operator=(const ShrubberyCreationForm & src)
{
	this->_target = src._target;
	this->_signGrade = src._signGrade;
	this->_execGrade = src._execGrade;
	return (*this);
}
//!------------------------------FUNCTION-------------------------------------

void	ShrubberyCreationForm::createAsciiTrees(void)
{
	std::string new_string;
	
	new_string.assign(_target);
	new_string.append("_shrubbery");
	std::ofstream file(new_string.c_str());
	file << "   x\n  xxx\n xxxxx\n   I" << std::endl;
	file.close();
}