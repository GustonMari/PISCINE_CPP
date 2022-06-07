/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 18:32:35 by gmary             #+#    #+#             */
/*   Updated: 2022/06/07 18:42:42 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

template <typename T>
class MutantStack
{
	public:
		MutantStack();
		MutantStack(const MutantStack & copy);

		~MutantStack();

		MutantStack & operator=(const MutantStack & copy);
	private:
};

//!------------------------------CONSTRUCTOR----------------------------------

template <typename T>
MutantStack<T>::MutantStack()
{

}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& copy)
{
	*this = copy;
} 

//!------------------------------DESTRUCTOR-----------------------------------

template <typename T>
MutantStack<T>::~MutantStack()
{

}

//!------------------------------OPERATOR-------------------------------------

template <typename T>
MutantStack<T>	&	MutantStack::operator=(const MutantStack<T> & copy)
{
(void)copy;
	return(*this);
}

//!------------------------------FUNCTION-------------------------------------
#endif