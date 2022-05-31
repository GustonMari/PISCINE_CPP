/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:13:39 by gmary             #+#    #+#             */
/*   Updated: 2022/05/31 17:46:32 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Data.hpp"

//!------------------------------CONSTRUCTOR----------------------------------

Data::Data()
{

}

Data::Data(int i, std::string s): private_data(i), confidential_name(s)
{

}

Data::Data(const Data& copy)
{
	*this = copy;
}

//!------------------------------DESTRUCTOR-----------------------------------

Data::~Data()
{

}

//!------------------------------OPERATOR-------------------------------------

Data	&	Data::operator=(const Data& copy)
{
	this->private_data = copy.private_data;
	this->confidential_name = copy.confidential_name;
	return(*this);
}

//!------------------------------FUNCTION-------------------------------------


void	Data::printValues(void)
{
	std::cout << "private_data: " << this->private_data << std::endl;
	std::cout << "confidential_name: " << this->confidential_name << std::endl;
}