/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:14:57 by gmary             #+#    #+#             */
/*   Updated: 2022/04/21 13:12:38 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : raw_bits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) : raw_bits(n << this->bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n) : raw_bits(roundf(n * (1 << this->bits)))
{
	std::cout << "Float constructor called" << std::endl;
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

Fixed	&Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
		this->raw_bits = rhs.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->raw_bits);
}

float	Fixed::

void	Fixed::setRawBits(int const raw)
{
	raw_bits = raw;
}
