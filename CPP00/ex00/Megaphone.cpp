/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 19:48:54 by gmary             #+#    #+#             */
/*   Updated: 2022/05/30 10:26:31 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	str.replace , str.fill
	https://perso.isima.fr/loic/cpp/string.fr.php TOP pour changement string
	https://www.cplusplus.com/reference/string/string/assign/
	possible de remplir la string dirrectement tel que: str[j] = ::toupper(str[j]);
	on peut aussi faire a la place de str.lenght => std::size(str);
*/

#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	std::string	str;
	int	i;
	int	j;

	i = 1;
	if (ac >= 2)
	{
		while (i < ac)
		{
			j = 0;
			str.assign(av[i]);
			while ((long unsigned int)j < str.length())
			{
				std::cout << (char) std::toupper(str[j]);
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
