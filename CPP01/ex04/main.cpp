/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:02:13 by gmary             #+#    #+#             */
/*   Updated: 2022/04/19 16:57:11 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

/*
	fstream est une bibli qui permet de lire et ecrire dans un fichier

	ce sont deux facon decrire:
	new_str += line[i];
	new_str.push_back(line[i]);
	
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
			new_str += line[i];
		i++;
	}
	return (new_str);
}

/* int	main()
{
	std::string					line;
	std::string					str1;
	std::string					str2;
	line = "salut ca va toi oui tres bien ca va";
	str1 = "va";
	str2 = "va pas ";
	std::cout << ft_replace(line, str1, str2) << std::endl;
} */

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Bad argument" << std::endl;
		return (0);
	}
	std::string		line;
	std::ifstream	ifs(av[1]);
	if (!ifs.is_open())
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
	{
		//ofs << line << std::endl;
		ofs << ft_replace(line, av[2], av[3]) << std::endl;
		//std::cout << line << std::endl;
	}
	ofs.close();
	ifs.close();
	return (0);
} */