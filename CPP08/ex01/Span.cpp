/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 15:28:54 by gmary             #+#    #+#             */
/*   Updated: 2022/06/03 17:08:20 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

//!------------------------------CONSTRUCTOR----------------------------------

Span::Span(): _numbers(), N(0)
{
}

Span::Span(unsigned int _size_n): _numbers(), N(_size_n)
{
	
}

Span::Span(const Span& copy)
{
	*this = copy;
}

//!------------------------------DESTRUCTOR-----------------------------------

Span::~Span()
{

}

//!------------------------------OPERATOR-------------------------------------

Span & Span::operator=(const Span & copy)
{
	if (this != &copy)
	{
		this->_numbers = copy._numbers;
		this->N = copy.N;
	}
	return (*this);
}

//!------------------------------FUNCTION-------------------------------------

void	Span::addNumber(int value)
{
	if (_numbers.size() < N)
		_numbers.push_back(value);
	else
		throw SpanIsFull();
}

int	Span::shortestSpan(void)
{
	if (N == 0 || N == 1)
		throw NoDistance();
	else
		
}

int	Span::longestSpan(void)
{
	if (N == 0 || N == 1)
		throw NoDistance();
	else
}

//!------------------------------EXCEPTIONS-------------------------------------

const char * Span::SpanIsFull::what(void) const throw()
{
	return ("Span Is full\n");
}

const char * Span::NoDistance::what(void) const throw()
{
	return ("Span Is full\n");
}