/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 09:35:38 by gmary             #+#    #+#             */
/*   Updated: 2022/06/01 09:36:33 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP
# include <iostream>
# include <string>
# include <limits.h>
# include "Base.hpp"

class A: public Base
{
	public:
		A();
		A(const A & copy);

		~A();

		A & operator=(const A & copy);
	private:
};

#endif