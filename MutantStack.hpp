/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:58:04 by gmary             #+#    #+#             */
/*   Updated: 2022/06/07 17:30:44 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <string>
# include <limits.h>
# include <iterator>
# include <vector>
# include <deque>
# include <list>
# include <map>
# include <set>
# include <array>
# include <algorithm>

class MutantStack
{
	public:
		MutantStack();
		MutantStack(const MutantStack & copy);

		~MutantStack();

		MutantStack & operator=(const MutantStack & copy);
	private:
};

#endif