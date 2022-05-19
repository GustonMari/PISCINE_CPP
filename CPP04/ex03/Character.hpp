/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:09:30 by gmary             #+#    #+#             */
/*   Updated: 2022/05/19 16:43:38 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "All.hpp"

class Character: public ICharacter
{
	public:
		Character();
		Character(Character const & src);
		Character(std::string new_name);
		~Character();
		Character	&operator=(Character const & rhs);
		void		equip(AMateria *m);
		void		unequip(int idx);
		void		use(int idx, ICharacter & target);
		std::string const & getName() const;
	private:
		AMateria	*_inventory[4];
		int			_inventory_size;
		std::string name;
};

#endif