/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 21:40:28 by gmary             #+#    #+#             */
/*   Updated: 2022/04/13 11:15:52 by gmary            ###   ########.fr       */
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
		do
		{
			std::cout << i << " - first name: ";
			std::getline(std::cin, str);
			repertory[i].set_name(str);
		} while (str.empty());
		do
		{
			std::cout << i << " - last name: ";
			std::getline(std::cin, str);
			repertory[i].set_last_name(str);
		} while (str.empty());
		do
		{
			std::cout << i << " - nickname: ";
			std::getline(std::cin, str);
			repertory[i].set_nickname(str);
		} while (str.empty());
		do
		{
			std::cout << i << " - phone number: ";
			std::getline(std::cin, str);
			repertory[i].set_number(str);
		} while (str.empty());
		do
		{
			std::cout << i << " - darkest secret: ";
			std::getline(std::cin, str);
			repertory[i].set_darkest_secret(str);
		} while (str.empty());
		i++;
	}
}

void	PhoneBook::search_contact()
{
	std::cout << "index | first name | last name | nickname | phone number | darkest secret" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << i << " | ";
		std::cout << repertory[i].get_name() << " | ";
		std::cout << repertory[i].get_last_name() << " | ";
		std::cout << repertory[i].get_nickname() << " | ";
		std::cout << repertory[i].get_number() << " | ";
		std::cout << repertory[i].get_darkest_secret() << std::endl;
		i++;
	}
}

void	PhoneBook::show_contact()
{
	int		i;

	i = 0;
	while (i < 8)
	{
		std::cout << i << " - Name: " << repertory[i].get_name() << std::endl;
		std::cout << i << " - Last Name: " << repertory[i].get_name() << std::endl;
		std::cout << i << " - Number: " << repertory[i].get_number() << std::endl;
		std::cout << i << " - darkest secret: " << repertory[i].get_darkest_secret() << std::endl;
		i++;
	}
}

PhoneBook::PhoneBook(void)
{
	std::cout << "Create PhoneBook" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Delete PhoneBook" << std::endl;
}
