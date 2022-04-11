/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:53:20 by gmary             #+#    #+#             */
/*   Updated: 2022/04/11 20:59:03 by gmary            ###   ########.fr       */
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
};

Contact::Contact(void)
{
		std::cout << BRED "Constructor contact called" CRESET << std::endl;
}

Contact::~Contact()
{
		std::cout << BRED "Destructor called" CRESET << std::endl;
}
