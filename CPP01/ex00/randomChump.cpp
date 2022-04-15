/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 10:50:51 by gmary             #+#    #+#             */
/*   Updated: 2022/04/15 17:14:28 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

void	Zombie::randomChump(std::string name)
{
	Zombie new_Zombie;
	new_Zombie._name.assign(name);
	std::cout << new_Zombie._name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}