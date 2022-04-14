/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 21:40:28 by gmary             #+#    #+#             */
/*   Updated: 2022/04/14 12:02:54 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "colors.h"
#include "Phonebook.hpp"
#include "Contact.hpp"
#include <stdlib.h>

/*
	str.empty()
	str.size()
	append concat a la fin de la string actuelle
	str.append(str2);                       // "Writing "
	str.append(str3,6,3);                   // "10 "
	str.append("dots are cool",5);          // "dots "
	str.append("here: ");                   // "here: "
	 std::string str=base;           // "this is a test string."
 	str.replace(9,5,str2);          // "this is an example string." (1)
 	str.replace(19,6,str3,7,6);     // "this is an example phrase." (2)
 	str.replace(8,10,"just a");     // "this is just a phrase."     (3)
 	str.replace(8,6,"a shorty",7);  // "this is a short phrase."    (4)
 	str.replace(22,1,3,'!');        // "this is a short phrase!!!"  (5)
	str.c_str();
*/

void	make_ten_wider(std::string str)
{
	long unsigned int	i;

	i = 0;
	if (str.length() < 10)
	{
		while (i < 10 - str.length())
		{
			std::cout << " ";
			i++;
		}
		std::cout << str << "|";
	}
	else if (str.length() > 10)
	{
		while (i < 9)
		{
			std::cout << str[i];
			i++;
		}
		std::cout << ".|";
	}
	else
		std::cout << str << "|";
}


void	PhoneBook::search_contact()
{
	std::string	str;
	long			number;
	
	if (nb_contact == 0)
	{
		std::cout << "No contact present" << std::endl;
		return ;
	}
	std::cout << "wich contact do you want?" << std::endl;
	std::getline(std::cin , str);
	number = atol(str.c_str());
	if (number < 0 || number > nb_contact - 1)
	{
		std::cout << "No contact present" << std::endl;
		return ;
	}
	std::cout << "index     | firstname| last name|  nickname|    number|" << std::endl;
	std::cout << "         " << number << "|";
	make_ten_wider(repertory[number].get_name());
	make_ten_wider(repertory[number].get_last_name());
	make_ten_wider(repertory[number].get_nickname());
	make_ten_wider(repertory[number].get_number());
	std::cout << std::endl;
}

void	PhoneBook::get_contact()
{
	std::string	str;

	if (index == 8)
		index = 0;
	do
	{
		std::cout << index << " - first name: ";
		std::getline(std::cin, str);
		repertory[index].set_name(str);
	} while (str.empty());
	do
	{
		std::cout << index << " - last name: ";
		std::getline(std::cin, str);
		repertory[index].set_last_name(str);
	} while (str.empty());
	do
	{
		std::cout << index << " - nickname: ";
		std::getline(std::cin, str);
		repertory[index].set_nickname(str);
	} while (str.empty());
	do
	{
		std::cout << index << " - phone number: ";
		std::getline(std::cin, str);
		repertory[index].set_number(str);
	} while (str.empty());
	do
	{
		std::cout << index << " - darkest secret: ";
		std::getline(std::cin, str);
		repertory[index].set_darkest_secret(str);
	} while (str.empty());
	if (nb_contact < 8)
		nb_contact++;
	index++;
}


PhoneBook::PhoneBook(void)
{
	std::cout << "Create PhoneBook" << std::endl;
	nb_contact = 0;
	index = 0;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Delete PhoneBook" << std::endl;
}
