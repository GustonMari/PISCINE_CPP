/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 16:05:19 by gmary             #+#    #+#             */
/*   Updated: 2022/06/01 19:18:08 by gmary            ###   ########.fr       */
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
		//Array(T * arr, int length);
		~Array();
	private:
		T	*tab;
		int	size;
};

template <typename T> Array<T>::Array(unsigned int n): size(n)
{
	std::cout << "Size constructor"<< std::endl;
	this->tab = new T[n]();
	for (unsigned int i = 0; i < n; i++)
		this->tab[i] = T(); //on doit mettre zero pour le default mais comment faire pour std::string
}

template <typename T> Array<T>::Array(const Array & src): size(src.size)
{
	std::cerr << "Copy construct" << std::endl;
	this->size = src.size;
	this->tab = new T[src.size];
	for (int i = 0; i < src.size; i++)
		this->tab[i] = src[i]; //on doit mettre zero pour le default mais comment faire pour std::string
}

/* template <typename T> Array<T>::Array(T arr[], int length): size(length)
{
	tab = new T[length];
	for (int i = 0; i < length; i++)
		this->tab[i] = arr[i];
} */

//TODO: EST-CE BIEN COMME CA QUE LON CREE UNE ARRAY VIDE ??

template <typename T> Array<T>::Array(): size(1)
{
	std::cout << "standard constructor" << std::endl;
	this->tab = NULL;
}

template <typename T> Array<T>::~Array()
{
	delete [] tab;
}


#endif