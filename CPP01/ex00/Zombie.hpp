/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 10:49:57 by gmary             #+#    #+#             */
/*   Updated: 2022/04/15 16:45:40 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void	announce(void);
		static Zombie* newZombie(std::string name);
	private:
		std::string	_name;
};

