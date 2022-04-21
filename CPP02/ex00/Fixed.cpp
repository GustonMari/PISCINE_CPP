/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:14:57 by gmary             #+#    #+#             */
/*   Updated: 2022/04/21 10:16:50 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : raw_bits(0)
{
	std::cout << "Default constructor called" << std::endl;
}



Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->raw_bits);
}

Fixed	&Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
		this->raw_bits = rhs.getRawBits();
	return (*this);
}

void	Fixed::setRawBits(int const raw)
{
	raw_bits = raw;
}
