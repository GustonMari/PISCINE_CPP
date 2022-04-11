/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:53:20 by gmary             #+#    #+#             */
/*   Updated: 2022/04/11 21:38:38 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "colors.h"

class Contact
{
private:
	/* data */
public:
	Contact();
	~Contact();
	std::string	name = "Gustave";
	std::string	last_name = "Mary";
	std::string	number = "06-------";
	std::string	age = "26";
};

Contact::Contact(void)
{
		std::cout << BRED "Constructor contact called" CRESET << std::endl;
}

Contact::~Contact()
{
		std::cout << BRED "Destructor called" CRESET << std::endl;
}
