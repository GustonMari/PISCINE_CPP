/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 13:58:06 by gmary             #+#    #+#             */
/*   Updated: 2022/06/03 15:05:49 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP
#include <algorithm>

//!------------------------------FUNCTION-------------------------------------

template <typename T>
int	easyfind(T &container, int value)
{
	typename T::iterator it;

	it = find(container.begin(), container.end(), value);
	if (it == container.end())
		throw FindNotExist();
	//std::cout << "Find! =" << *it << ", index = "<< it - container.begin() << std::endl;
	return (*it);
}

#endif