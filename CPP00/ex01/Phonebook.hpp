/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:28:40 by gmary             #+#    #+#             */
/*   Updated: 2022/04/11 21:39:22 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <array>
#include "colors.h"
#include "Contact.hpp"

class PhoneBook
{
private:
	/* data */
public:

	//besoin den cree 8 tel que 	Contact repertory[8];
	Contact repertory;
	PhoneBook();
	~PhoneBook();
	void	create_contact();
	void	show_contact();
	//std::array<Contact, 8> agenda;
};

PhoneBook::PhoneBook(void)
{
	std::cout << "Constructor called" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Destructor called" << std::endl;
}
