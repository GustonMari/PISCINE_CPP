/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 21:02:02 by gmary             #+#    #+#             */
/*   Updated: 2022/04/11 21:33:22 by gmary            ###   ########.fr       */
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
			std::cout <<  BRED << input << CRESET << std::endl;
	}
	return (0);
}