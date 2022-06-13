/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 14:06:35 by gmary             #+#    #+#             */
/*   Updated: 2022/06/13 14:42:57 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>
# include <string>

template <typename T, typename F, typename P>
void	iter(T *tab, size_t size, F (*f)(P))
{
	for (size_t i = 0; i < size; i++)
		f(tab[i]);
}

template <typename T>
void	iter(T *tab, size_t size, void (*f)(T const &))
{
	for (size_t i = 0; i < size; i++)
		f(tab[i]);
}

template <typename T>
void	iter(T *tab, size_t size, void (*f)(T &))
{
	for (size_t i = 0; i < size; i++)
		f(tab[i]);
}

template <typename T> void print_tab(T &s)
{
	std::cout << s << std::endl;
}

template <typename T> int print_const(T const &s)
{
	std::cout << s << std::endl;
	return (3);
}

template <typename T> void square(T &i)
{
	i *= i;
}

#endif