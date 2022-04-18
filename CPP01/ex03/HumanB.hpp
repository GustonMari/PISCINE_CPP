/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:40:09 by gmary             #+#    #+#             */
/*   Updated: 2022/04/18 16:27:18 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include <string>
#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();
		void	setWeapon(Weapon &weapon);
		void	attack();
	private:
		std::string			_name;
		Weapon				*_weapon;
};

#endif