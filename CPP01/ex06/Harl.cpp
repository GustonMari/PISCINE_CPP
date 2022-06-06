/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:59:24 by gmary             #+#    #+#             */
/*   Updated: 2022/06/06 09:39:35 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

Harl::Harl(void)
{
	//std::cout << "Harl constructor" << std::endl;
}

Harl::~Harl(void)
{
	//std::cout << "Harl destructor" << std::endl;
}

void	Harl::complain(std::string level)
{
	int	i;
	void	(Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	i = 0;
	if (!level.compare(str[0]) || !level.compare(str[1])
	|| !level.compare(str[2]) || !level.compare(str[3]))
	{

		do
		{
			if(level.compare(str[i]) == 0)
				break ;
			i++;
		} while (i < 4);
		switch (i)
		{
			case 0:
				std::cout << "[ " << str[0] << " ]" << std::endl;
				(this->*f[0])();
				std::cout << std::endl;
			case 1:
				std::cout << "[ " << str[1] << " ]" << std::endl;
				(this->*f[1])();
				std::cout << std::endl;
			case 2:
				std::cout << "[ " << str[2] << " ]" << std::endl;
				(this->*f[2])();
				std::cout << std::endl;
			case 3:
				std::cout << "[ " << str[3] << " ]" << std::endl;
				(this->*f[3])();
				std::cout << std::endl;
		}
	}
	else
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "Debug" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "Info" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "Error" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "Warning" << std::endl;
}
