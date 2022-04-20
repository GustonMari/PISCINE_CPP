/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:59:24 by gmary             #+#    #+#             */
/*   Updated: 2022/04/20 11:39:14 by gmary            ###   ########.fr       */
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
	do
	{
		if (level.compare(str[i]) == 0)
		{
			while (i < 4)
			{
				std::cout << "[ " << str[i] << " ]" << std::endl;
				(this->*f[i])();
				std::cout << std::endl;
				i++;
			}
			return ;
		}
		i++;
	} while (i < 4);
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

/* void	Harl::complain(std::string level)
{
	if (level == "debug")
		this->debug();
	else if (level == "info")
		this->info();
	else if (level == "error")
		this->error();
	else if (level == "warning")
		this->warning();
} */

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
