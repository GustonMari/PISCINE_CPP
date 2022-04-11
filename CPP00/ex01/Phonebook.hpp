/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:28:40 by gmary             #+#    #+#             */
/*   Updated: 2022/04/11 20:58:09 by gmary            ###   ########.fr       */
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
	PhoneBook();
	~PhoneBook();
	std::array<Contact, 8> agenda;
};

PhoneBook::PhoneBook(void)
{
	std::cout << "Constructor called" << std::endl;
}

PhoneBook::~Classes()
{
	std::cout << "Destructor called" << std::endl;
}
