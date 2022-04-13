/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:39:24 by gmary             #+#    #+#             */
/*   Updated: 2022/04/13 10:27:19 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"


//std::string	Contact::get_name(void)
//{
//	return (this->name);
//}
//Contact Contact::set_name(std::string name)
//{
//	this->name = name;
//	return (*this);
//}

std::string	Contact::get_name(void)
{
	return (name);
}

std::string	Contact::get_last_name(void)
{
	return (last_name);
}

std::string	Contact::get_number(void)
{
	return (number);
}

std::string	Contact::get_age(void)
{
	return (age);
}

void Contact::set_name(std::string name_)
{
	name.assign(name_);
}

void Contact::set_last_name(std::string last_name_)
{
	last_name.assign(last_name_);
}

void Contact::set_number(std::string number_)
{
	number.assign(number_);
}

void Contact::set_age(std::string age_)
{
	age.assign(age_);
}

Contact::Contact(void)
{
		//std::cout << BRED "Constructor contact called" CRESET << std::endl;
}

Contact::~Contact()
{
		//std::cout << BRED "Destructor contact called" CRESET << std::endl;
}