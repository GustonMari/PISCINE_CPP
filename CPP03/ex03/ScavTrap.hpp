/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:10:28 by gmary             #+#    #+#             */
/*   Updated: 2022/04/28 08:36:40 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap & src);
		ScavTrap	& operator=(const ScavTrap & src);
		void		guardGate();
		void		attack(const std::string& target);
	private:
		bool	gate_keeper;
		//int	hit_point;
		//int	energy_point;
		//int	attack_damage;
};

#endif