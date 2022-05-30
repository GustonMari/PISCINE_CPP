/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:28:40 by gmary             #+#    #+#             */
/*   Updated: 2022/05/30 10:46:07 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include "Contact.hpp"
# define SIZE_PHONEBOOK 8

class PhoneBook
{
	private:
		int		nb_contact;
		int		index;
		Contact	repertory[SIZE_PHONEBOOK];

	public:
		PhoneBook();
		~PhoneBook();
		void	search_contact();
		void	get_contact();
		void	show_contact();
};

#endif