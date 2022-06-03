/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 16:04:01 by gmary             #+#    #+#             */
/*   Updated: 2022/06/03 17:03:06 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <vector>
#include "Span.hpp"

int main()
{
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		//active the line down to make exception work
		//sp.addNumber(11);
		//std::cout << sp.shortestSpan() << std::endl;
		//std::cout << sp.longestSpan() << std::endl;
		return (0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}