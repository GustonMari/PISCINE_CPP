/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:59:21 by gmary             #+#    #+#             */
/*   Updated: 2022/04/20 11:19:13 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

//lennonce est vraiment pas claire avec ce quil faut faire pour un main

int	main()
{
	Harl	h;
	while (1)
	{
		h.complain("debug");
		h.complain("fdkhjfghkdf");
		h.complain("info");
		h.complain("error");
		h.complain("warning");
	}
}