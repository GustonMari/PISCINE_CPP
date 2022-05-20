/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:17:00 by gmary             #+#    #+#             */
/*   Updated: 2022/05/20 14:41:58 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "All.hpp"

class	Cure: public AMateria/* , public ICharacter */
{
	public:
		Cure();
		Cure(Cure const & src);
		~Cure();
		Cure		&operator=(Cure const & rhs);
		virtual AMateria	*clone() const;
		virtual void		use(ICharacter & target);
	private:
};

#endif