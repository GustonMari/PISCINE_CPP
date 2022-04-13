/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 21:40:28 by gmary             #+#    #+#             */
/*   Updated: 2022/04/13 14:02:30 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "colors.h"
#include "Phonebook.hpp"
#include "Contact.hpp"

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
*/

std::string make_ten_wider(std::string str)
{
	long unsigned int	i;
	std::string		str_tmp;

	i = 0;
	//while (i < 8)
	//{
	//	str_tmp[i] = str[i];
	//	if (str.size() >= 8)
	//	{
	//		str[8] = '.';
	//		str[9] = '\0';
	//	}
	//	i++;
	//}
	i = 0;
	if (str.size() >= 8)
	{
		str_tmp.append(str);
		str_tmp.replace(8, 1, ".");
		// le truc en dessous marche pas mais il faut tester
		if (i < 10 - str_tmp.size() )
		{
			str_tmp.insert(1, " ");
			i++;
		}
	}
	i = 0;
	if (str.size() < 10)
	{
		while (i < 10 - str.size())
		{
			str_tmp.append(" ");
			i++;
		}
		if (str.size() < 8)
			str_tmp.append(str);
	}

	return (str_tmp);
}

/* std::string make_ten_wider(std::string str)
{

			if (str.size() < 8)
		{
			str_tmp.append(str);
			str_tmp.append(".");
		}
	long unsigned int	i;
	std::string		str_tmp;

	i = 0;
	//while (i < 8)
	//{
	//	str_tmp[i] = str[i];
	//	if (str.size() >= 8)
	//	{
	//		str[8] = '.';
	//		str[9] = '\0';
	//	}
	//	i++;
	//}
	i = 0;
	if (str.size() < 10)
	{
		while (i < 10 - str.size())
		{
			str_tmp.append(" ");
			i++;
		}
		str_tmp.append(str);
	}
	if (str.size() >= 8)
	{
		str_tmp.replace(8, 2, ".\0");
	}
	return (str_tmp);
} */

void	PhoneBook::search_contact()
{
	std::cout << "index     | firstname| last name|  nickname|    number|darksecret|" << std::endl;
	for (int i = 0; i < SIZE_PHONEBOOK; i++)
	{
		std::cout << i << "         |";
		std::cout << make_ten_wider(repertory[i].get_name()) << "|";
		std::cout << make_ten_wider(repertory[i].get_last_name()) << "|";
		std::cout << make_ten_wider(repertory[i].get_nickname()) << "|";
		std::cout << make_ten_wider(repertory[i].get_number()) << "|";
		std::cout << make_ten_wider(repertory[i].get_darkest_secret()) << "|" << std::endl;
		//i++;
	}
}

void	PhoneBook::get_contact()
{
	int	i;
	std::string	str;
	i = 0;
	while(i < SIZE_PHONEBOOK)
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


PhoneBook::PhoneBook(void)
{
	std::cout << "Create PhoneBook" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Delete PhoneBook" << std::endl;
}
