/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 21:02:02 by gmary             #+#    #+#             */
/*   Updated: 2022/04/14 11:48:48 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "colors.h"
//#include "Contact.hpp"
#include "Phonebook.hpp"

/*
	class_name array_name [size] ;
*/

int	main(int ac, char **av)
{
	std::string	input;
	PhoneBook	cellphone;

	(void)ac;
	(void)av;
	std::cout <<  BBLU "Welcome to my Phonebook App" CRESET << std::endl;
	std::cout <<  BLU "EXIT | ADD | SHOW" CRESET << std::endl;
	while (1)
	{
		std::cout << GRN "Phone > " CRESET;
		std::getline(std::cin, input);
		if (input.compare("EXIT") == 0)
		{
			std::cout <<  BRED << "EXIT" << CRESET << std::endl;
					return (0);
		}
		if (input.compare("ADD") == 0)
		{
			cellphone.get_contact();
		}
		if (input.compare("SEARCH") == 0)
		{
			cellphone.search_contact();
		}
	}
	return (0);
}