/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:53:20 by gmary             #+#    #+#             */
/*   Updated: 2022/04/13 10:22:58 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>
#include <string>
#include "colors.h"

class Contact
{
	private:
		std::string	name = "";
		std::string	last_name = "";
		std::string	number = "";
		std::string	age = "";
	public:
		Contact();
		~Contact();
		std::string	get_name();
		std::string	get_last_name();
		std::string	get_number();
		std::string	get_age();
		void		set_name(std::string);
		void		set_last_name(std::string);
		void		set_number(std::string);
		void		set_age(std::string);
};

#endif