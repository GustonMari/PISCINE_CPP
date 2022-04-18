/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:40:20 by gmary             #+#    #+#             */
/*   Updated: 2022/04/18 15:57:55 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class Weapon
{
	public:
		std::string	const &getType(void);
		void		setType(std::string type);
		Weapon(std::string type);
		~Weapon();
	private:
		std::string	_type;
};
#endif