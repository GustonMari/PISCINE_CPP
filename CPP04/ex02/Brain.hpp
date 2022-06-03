/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 09:38:38 by gmary             #+#    #+#             */
/*   Updated: 2022/06/03 11:18:07 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
	public:
		Brain();
		Brain(const Brain & src);
		~Brain();
		Brain &operator=(const Brain & src);
		void	show_ideas();
		void	set_ideas(int index, std::string thought);
		std::string   get_ideas(int index);
	protected:
		std::string	ideas[100];
	
};

#endif