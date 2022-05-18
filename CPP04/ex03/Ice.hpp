/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:12:22 by gmary             #+#    #+#             */
/*   Updated: 2022/05/18 16:15:38 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"

//attention si on clone ondoit allouer de la memoire

class Ice: public AMateria
{
	public:
		Ice();
		Ice(Ice const & src);
		~Ice();
		Ice		&operator=(Ice const & rhs);
		AMateria	*clone() const;
		void		use(ICharacter & target);
	private:
};

#endif