/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 18:32:35 by gmary             #+#    #+#             */
/*   Updated: 2022/06/13 16:53:56 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP
# include "MutantStack.hpp"
# include <iterator>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		MutantStack()
		{
		
		}
		MutantStack(const MutantStack& copy)
		{
			if (this != &copy)
			{
				*this = copy;
				
			}
		} 

		~MutantStack()
		{
		
		}

		MutantStack	&	operator=(const MutantStack & copy)
		{
			if (this != &copy)
			{
				std::stack<T>::operator=(copy);
			}
			return(*this);
		}

		MutantStack	& operator--(int nb)
		{
			std::stack<T>::operator--(nb);
			return (*this);
		}

		MutantStack	& operator++(int nb)
		{
			std::stack<T>::operator++(nb);
			return (*this);
		}
		MutantStack &	operator--(void)
		{
			std::stack<T>::operator--();
			return (*this);
		}
		MutantStack &	operator++(void)
		{
			std::stack<T>::operator++();
			return (*this);
		}
		iterator begin()
		{
			return (this->c.begin());
		}
		iterator end()
		{
			return (this->c.end());
		}
	private:
};

#endif