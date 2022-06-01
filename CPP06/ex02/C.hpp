/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 09:37:45 by gmary             #+#    #+#             */
/*   Updated: 2022/06/01 10:46:18 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP
# include <iostream>
# include <string>
# include <limits.h>
#include "Base.hpp"

class C: public Base
{
	public:
		C();
		C(const C & copy);

		~C();

		C & operator=(const C & copy);
	private:
};

#endif