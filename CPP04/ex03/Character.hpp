/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:09:30 by gmary             #+#    #+#             */
/*   Updated: 2022/05/18 17:12:59 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character: public AMateria, public ICharacter
{
	public:
		Character();
		Character(Character const & src);
		~Character();
		Character		&operator=(Character const & rhs);
		void			equip(AMateria *m);
		void			unequip(int idx);
		void			use(int idx, ICharacter & target);
	private:
		AMateria		*_inventory[4];
		int				_inventory_size;
};

#endif