/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 21:40:28 by gmary             #+#    #+#             */
/*   Updated: 2022/04/13 10:25:00 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "colors.h"
#include "Phonebook.hpp"
#include "Contact.hpp"

/*
	str.empty()
	
*/


void	PhoneBook::get_contact()
{
	int	i;
	std::string	str;
	i = 0;
	while(i < 8)
	{
		std::cout << "Enter the name of the contact: ";
		std::getline(std::cin, str);
		repertory[i].set_name(str);
		std::cout << "Enter the last name of the contact: ";
		std::getline(std::cin, str);
		repertory[i].set_last_name(str);
		std::cout << "Enter the number of the contact: ";
		std::getline(std::cin, str);
		repertory[i].set_number(str);
		std::cout << "Enter the age of the contact: ";
		std::getline(std::cin, str);
		repertory[i].set_age(str);
		i++;
	}
}

void	PhoneBook::show_contact()
{
	int		i;

	i = 0;
	while (i < 8)
	{
		std::cout << "Name: " << repertory[i].get_name() << std::endl;
		std::cout << "Last Name: " << repertory[i].get_name() << std::endl;
		std::cout << "Number: " << repertory[i].get_number() << std::endl;
		std::cout << "Age: " << repertory[i].get_age() << std::endl;
		i++;
	}
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
	std::cout << "Create PhoneBook" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Delete PhoneBook" << std::endl;
}
