/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:12:22 by gmary             #+#    #+#             */
/*   Updated: 2022/05/19 17:28:11 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "All.hpp"

//WARNING si on clone ondoit allouer de la memoire

class Ice: virtual public AMateria
{
	public:
		Ice();
		Ice(Ice const & src);
		~Ice();
		Ice		&operator=(Ice const & rhs);
		AMateria	*clone() const;
		virtual void		use(ICharacter & target);
	private:
};

#endif