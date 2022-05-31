/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CheckType.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 10:17:34 by gmary             #+#    #+#             */
/*   Updated: 2022/05/31 17:09:15 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "All.hpp"

//TODO voir avec argument de taille nulle et si on envoie juste un + ou -, si f tout seul, . a la fin, -f, +f, -.

bool	is_a_num(std::string str)
{
	for (unsigned int i = 0; i < str.length() ; i++)
	{
		if (std::isdigit(str[i]))
			return (false);
	}
	return (true);
}

bool	count_point(std::string str)
{
	int count;

	count = 0;
	for (int i = 0; (unsigned int)i < str.length(); i++)
	{
		if (str[i] == '.')
			count++;
	}
	if (count > 1)
		return (false);
	return (true);
}

bool	is_a_str(std::string str)
{
	unsigned int	i;
	
	i = 0;
	if (str.length() == 0)
		return (false);
	if (is_a_num(str))
		return (false);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (i < str.length() - 1)
	{
		if (!std::isdigit(str[i]) && str[i] != '.')
			return (false);
		i++;
	}
	if ((str[i] && !std::isdigit(str[i]) && str[i] != 'f') || count_point(str) == false || str[0] == '.')
		return (false);
	return (true);
}