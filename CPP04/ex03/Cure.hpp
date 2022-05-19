/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:17:00 by gmary             #+#    #+#             */
/*   Updated: 2022/05/18 17:12:37 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"
#include "ICharacter.hpp"

class	Cure: public AMateria, public ICharacter
{
	public:
		Cure();
		Cure(Cure const & src);
		~Cure();
		Cure		&operator=(Cure const & rhs);
		AMateria	*clone() const;
		void		use(ICharacter & target);
	private:
};

#endif