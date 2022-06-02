/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 16:05:19 by gmary             #+#    #+#             */
/*   Updated: 2022/06/02 10:38:57 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP


template <typename T> class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(const Array & src);
		Array(T * arr, unsigned int length);
		
		~Array();
		
		Array & operator=(const Array & src);
		T & operator[](unsigned int i);

		unsigned int size() const;
		class OutOfRange : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
	private:
		T	*tab;
		unsigned int	_size;
};

//!------------------------------CONSTRUCTOR----------------------------------

//TODO: EST-CE BIEN COMME CA QUE LON CREE UNE ARRAY VIDE ??

template <typename T>
Array<T>::Array(): _size(0)
{
	std::cout << "standard constructor" << std::endl;
	this->tab = NULL;
}

template <typename T>
Array<T>::Array(unsigned int n): _size(n)
{
	std::cout << "_size constructor"<< std::endl;
	this->tab = new T[n]();
	for (unsigned int i = 0; i < n; i++)
		this->tab[i] = T(); //on doit mettre zero pour le default mais comment faire pour std::string
}

template <typename T>
Array<T>::Array(const Array & src): _size(src._size)
{
	std::cerr << "Copy construct" << std::endl;
	this->_size = src._size;
	this->tab = new T[src._size];
	for (unsigned int i = 0; i < src._size; i++)
		this->tab[i] = src.tab[i];
}


//TODO: enlever cette fonction en desous
template <typename T>
Array<T>::Array(T arr[], unsigned int length): _size(length)
{
	tab = new T[length];
	for (unsigned int i = 0; i < length; i++)
		this->tab[i] = arr[i];
}

//!------------------------------DESTRUCTOR-----------------------------------




template <typename T> Array<T>::~Array()
{
	if (tab)
		delete [] tab;
}

//!------------------------------OPERATOR-------------------------------------

template <typename T> 
Array<T>	&	Array<T>::operator=(const Array<T> & src)
{
	if (this->tab)
		delete [] this->tab;
	this->_size= src._size;
	this->tab = new T[src._size];
	for (unsigned int i = 0; i < src._size; i++)
		this->tab[i] = src.tab[i];
	return(*this);
}

template <typename T>
T & Array<T>::operator[](unsigned int i)
{
	if (i >= this->_size)
		throw Array::OutOfRange();
	return (this->tab[i]);
}

//!------------------------------FUNCTION-------------------------------------

template <typename T>
unsigned int Array<T>::size() const
{
	return (this->_size);
}

//!------------------------------EXCEPTION-------------------------------------

template <typename T>
const char * Array<T>::OutOfRange::what() const throw()
{
	return ("Index out of range");
}


#endif