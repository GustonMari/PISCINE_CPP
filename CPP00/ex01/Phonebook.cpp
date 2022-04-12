/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 21:40:28 by gmary             #+#    #+#             */
/*   Updated: 2022/04/12 16:58:08 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "colors.h"
#include "Phonebook.hpp"
#include "Contact.hpp"

/*
void	Phonebook::show_contact(void)
	Pourquoi cela ne marche pas cette declaration ??
*/


Contact	PhoneBook::get_contact()
{
	return (repertory);
}

void	PhoneBook::show_contact(void)
{

	std::cout << "Name: " << std::endl;
	std::cout << "Last Name: " <<  std::endl;
	std::cout << "Number: " <<  std::endl;
	std::cout << "Age: " <<  std::endl;
//	std::cout << "Name: " << get_name() << std::endl;
//	std::cout << "Last Name: " << get_name() << std::endl;
//	std::cout << "Number: " << get_number() << std::endl;
//	std::cout << "Age: " << get_age() << std::endl;
}

/* void	show_contact(void)
{
	std::cout << "Name: " << get_name() << std::endl;
	std::cout << "Last Name: " << get_name() << std::endl;
	std::cout << "Number: " << get_number() << std::endl;
	std::cout << "Age: " << get_age() << std::endl;
} */

PhoneBook::PhoneBook(void)
{
	std::cout << "Constructor called" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Destructor called" << std::endl;
}
