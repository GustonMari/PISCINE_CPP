/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 11:49:05 by gmary             #+#    #+#             */
/*   Updated: 2022/04/18 12:01:16 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	str;
	str.assign("HI THIS IS BRAIN");
	std::string	*strPTR = &str;
	std::string	&strREF = str;
	std::cout << "str address: "<< &str << std::endl;
	std::cout << "ptr address: "<< strPTR << std::endl;
	std::cout << "ref address: "<< &strREF << std::endl;
	std::cout << "str string: "<< str << std::endl;
	std::cout << "ptr string: "<< *strPTR << std::endl;
	std::cout << "ref string: "<< strREF << std::endl;
}