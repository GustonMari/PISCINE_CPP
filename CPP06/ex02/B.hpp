/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 09:36:50 by gmary             #+#    #+#             */
/*   Updated: 2022/06/01 10:48:57 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP
# include <iostream>
# include <string>
# include <limits.h>
# include "Base.hpp"

class B: public Base
{
	public:
		B();
		B(const B & copy);

		~B();

		B & operator=(const B & copy);
	private:
};

#endif