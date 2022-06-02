/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:02:13 by gmary             #+#    #+#             */
/*   Updated: 2022/06/02 15:12:28 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
/*
	fstream est une bibli qui permet de lire et ecrire dans un fichier

	ce sont deux facon decrire:
	new_str += line[i];
	new_str.push_back(line[i]);
	ifs.peek() Returns the next character in the input sequence, without extracting it:
	 The character is left as the next character to be extracted from the stream.
	https://stackoverflow.com/questions/4533063/how-does-ifstreams-eof-work
*/

std::string	ft_replace(std::string line, std::string str1, std::string str2)
{
	long unsigned int			i;
	std::string	new_str;
	
	i = 0;
	while (i < line.length())
	{
		if (line.compare(i, str1.length(), str1) == 0)
		{
			new_str.append(str2);
			i += str1.length();
		}
		else
		{
			new_str += line[i];
			i++;
		}
	}
	return (new_str);
}

int	main(int ac, char **av)
{
	if (ac != 4 || !std::strlen(av[1]) || !std::strlen(av[2]) || !std::strlen(av[3]))
	{
		std::cout << "Bad argument" << std::endl;
		return (0);
	}
	std::string		line;
	std::ifstream	ifs(av[1]);
	if (!ifs.is_open() || ifs.bad() || (ifs.peek() == std::ifstream::traits_type::eof()))
	{
		std::cout << "Error bad file" << std::endl;
		return (0);
	}
	std::string		str;
	str.assign(av[1]);
	if (str.empty())
	{
		std::cout << "Bad argument" << std::endl;
		return (0);
	}
	str.append(".replace");
	std::ofstream ofs(str.c_str());
	//ifs >> line;
	//ofs << ft_replace(line, av[2], av[3]);
	while (std::getline(ifs, line))
		ofs << ft_replace(line, av[2], av[3]) << std::endl;
	ofs.close();
	ifs.close();
	return (0);
}

/* int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Bad argument" << std::endl;
		return (0);
	}
	std::string		line;
	std::ifstream	ifs(av[1]);
	if (!ifs.is_open() || ifs.bad())
	{
		std::cout << "Error bad file" << std::endl;
		return (0);
	}
	std::string		str;
	str.assign(av[1]);
	if (str.empty())
	{
		std::cout << "Bad argument" << std::endl;
		return (0);
	}
	str.append(".replace");
	std::ofstream ofs(str.c_str());
	ifs >> line;
	while (std::getline(ifs, line))
		ofs << ft_replace(line, av[2], av[3]) << std::endl;
	ofs.close();
	ifs.close();
	return (0);
} */
