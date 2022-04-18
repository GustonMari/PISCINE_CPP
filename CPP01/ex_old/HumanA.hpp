/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:40:00 by gmary             #+#    #+#             */
/*   Updated: 2022/04/18 15:18:46 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, std::string weapon);
		~HumanA();
		void	attack();
	private:
		Weapon				_weapon;
		std::string			_name;
};
#endif