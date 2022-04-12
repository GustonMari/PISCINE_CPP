/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:28:40 by gmary             #+#    #+#             */
/*   Updated: 2022/04/12 16:56:35 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
 #include <iostream>
// #include <string>
// #include <array>
// #include "colors.h"
#include "Contact.hpp"

class PhoneBook
{
	private:
			//std::array<Contact, 8>	contacts;
			//besoin den cree 8 tel que 	Contact repertory[8];
		Contact repertory;

	public:
		PhoneBook();
		~PhoneBook();
		Contact	get_contact();
		//void	create_contact();
		void	show_contact();
};

#endif