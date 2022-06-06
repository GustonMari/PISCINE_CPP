/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 15:28:54 by gmary             #+#    #+#             */
/*   Updated: 2022/06/06 18:09:13 by gmary            ###   ########.fr       */
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
	int min_dist;

	min_dist = INT_MAX;
	if (N == 0 || N == 1 || (N == 2 && _numbers[0] == _numbers[1]))
		throw NoDistance();
	else
	{
		for (unsigned int i = 0 ; i < N ; i++)
		{
			for (unsigned int j = i + 1 ; j < N ; j++)
			{
				if (min_dist > fabs(fabs(_numbers[i]) + _numbers[j]) && _numbers[i] < 0 && _numbers[j] > 0)
					min_dist = fabs(fabs(_numbers[i]) + _numbers[j]);
				else if (min_dist > fabs(_numbers[i] - _numbers[j]))
					min_dist = fabs(_numbers[i] - _numbers[j]);
			}
		}
	}
	return (min_dist);
}

//TODO: voir lorsquon a que deux nombres INT_MAX INT_MIN que faire
int	Span::longestSpan(void)
{
	int max_dist;

	max_dist = 0;
	if (N == 0 || N == 1 || (N == 2 && _numbers[0] == _numbers[1]))
		throw NoDistance();
	else
	{
		for (unsigned int i = 0 ; i < N ; i++)
		{
			for (unsigned int j = i + 1 ; j < N ; j++)
			{
				if (max_dist < fabs(fabs(_numbers[i]) + _numbers[j]) && _numbers[i] < 0 && _numbers[j] > 0)
					max_dist = fabs(fabs(_numbers[i]) + _numbers[j]);
				else if (max_dist < fabs(_numbers[i] - _numbers[j]))
					max_dist = fabs(_numbers[i] - _numbers[j]);
			}
		}
	}
	return (max_dist);
}

void	fillSpan(std::vector<int> &_begin, std::vector<int> _end)
{
	std::vector<int>::iterator it;
	it = _begin.begin();
	//srand(time(NULL));
	while (it != _end.end())
	{
		_begin.addNumber((rand() % CASE_SIZE));
	}
}

//!------------------------------EXCEPTIONS-------------------------------------

const char * Span::SpanIsFull::what(void) const throw()
{
	return ("Span Is full");
}

const char * Span::NoDistance::what(void) const throw()
{
	return ("No distance");
}