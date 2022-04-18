/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:40:20 by gmary             #+#    #+#             */
/*   Updated: 2022/04/18 14:53:40 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Weapon
{
	public:
		std::string	const &getType(void);
		void		setType(std::string type);
		Weapon();
		~Weapon();
	private:
		std::string	_type;
		
};