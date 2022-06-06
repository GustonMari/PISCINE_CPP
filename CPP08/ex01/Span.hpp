/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 15:26:34 by gmary             #+#    #+#             */
/*   Updated: 2022/06/06 10:08:47 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <string>
# include <limits.h>
# include <vector>
# include <deque>
# include <math.h>
# include <stdio.h>

//TODO: finir exo shortest longest

class Span
{
	public:
		Span();
		Span(const Span & copy);
		Span(unsigned int _size_n);

		~Span();

		Span & operator=(const Span & copy);

		void addNumber(int value);
		int shortestSpan();
		int longestSpan();
		class SpanIsFull: public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
		class NoDistance: public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
	private:
		std::vector<int> _numbers;
		unsigned int N;
};

#endif