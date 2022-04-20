/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:59:21 by gmary             #+#    #+#             */
/*   Updated: 2022/04/20 11:37:30 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Harl.hpp"

//lennonce est vraiment pas claire avec ce quil faut faire pour un main

int	main(int ac, char **av)
{
	Harl	h;
	if (ac == 2)
		h.complain(av[1]);
	else
		std::cout << "Add an argument" << std::endl;
	return (0);
}