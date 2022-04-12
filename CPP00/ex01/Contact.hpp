/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:53:20 by gmary             #+#    #+#             */
/*   Updated: 2022/04/12 16:31:41 by gmary            ###   ########.fr       */
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
		std::string	name = "Gustave";
		std::string	last_name = "Mary";
		std::string	number = "06-------";
		std::string	age = "26";
	public:
		Contact();
		~Contact();
		std::string	get_name();
		std::string	get_last_name();
		std::string	get_number();
		std::string	get_age();
};

#endif