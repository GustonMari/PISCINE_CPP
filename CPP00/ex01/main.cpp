/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 21:02:02 by gmary             #+#    #+#             */
/*   Updated: 2022/04/13 10:19:17 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <array>
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
		if (input.compare("exit") == 0 || input.compare("EXIT") == 0)
		{
			std::cout <<  BRED << "EXIT" << CRESET << std::endl;
					return (0);
		}
		if (input.compare("show") == 0 || input.compare("SHOW") == 0)
		{
			cellphone.show_contact();
		}
		if (input.compare("add") == 0 || input.compare("ADD") == 0)
		{
			cellphone.get_contact();
		}
	}
	return (0);
}