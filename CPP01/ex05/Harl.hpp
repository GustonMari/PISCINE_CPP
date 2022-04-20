/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:59:18 by gmary             #+#    #+#             */
/*   Updated: 2022/04/20 09:48:16 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Harl
{
	public:
		void complain(std::string level);
		Harl();
		~Harl();
	private:
		void	debug(void);
		void	info(void);
		void	error(void);
		void	warning(void);
};