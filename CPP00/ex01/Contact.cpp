/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:39:24 by gmary             #+#    #+#             */
/*   Updated: 2022/04/12 16:34:20 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"


//std::string	Contact::get_name(void)
//{
//	return (this->name);
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

Contact::Contact(void)
{
		std::cout << BRED "Constructor contact called" CRESET << std::endl;
}

Contact::~Contact()
{
		std::cout << BRED "Destructor contact called" CRESET << std::endl;
}