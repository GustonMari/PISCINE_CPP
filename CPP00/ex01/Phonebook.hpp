/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:28:40 by gmary             #+#    #+#             */
/*   Updated: 2022/05/24 14:22:05 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
// #include <string>
// #include <array>
// #include "colors.h"
# include "Contact.hpp"
# define SIZE_PHONEBOOK 8

class PhoneBook
{
	private:
			//std::array<Contact, 8>	contacts;
			//besoin den cree 8 tel que 	Contact repertory[8];
		int		nb_contact;
		int		index;
		Contact	repertory[SIZE_PHONEBOOK];

	public:
		PhoneBook();
		~PhoneBook();
		void	search_contact();
		void	get_contact();
		//void	create_contact();
		void	show_contact();
};

#endif