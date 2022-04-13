/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 21:40:28 by gmary             #+#    #+#             */
/*   Updated: 2022/04/13 10:57:15 by gmary            ###   ########.fr       */
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

void	PhoneBook::show_contact()
{
	int		i;

	i = 0;
	while (i < 8)
	{
		std::cout << "Name: " << repertory[i].get_name() << std::endl;
		std::cout << "Last Name: " << repertory[i].get_name() << std::endl;
		std::cout << "Number: " << repertory[i].get_number() << std::endl;
		std::cout << "darkest secret: " << repertory[i].get_darkest_secret() << std::endl;
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
