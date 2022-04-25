/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:14:57 by gmary             #+#    #+#             */
/*   Updated: 2022/04/25 16:13:14 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : raw_bits(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) : raw_bits(n << this->bits)
{
	//std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n) : raw_bits(roundf(n * (1 << this->bits)))
{
	//std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed & src)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src; // src devient l'objet courant on aurait aussi pu init les valeurs de de lobjet avec les valeurs de src
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

/*
	--------------------------- FUNCTION --------------------------------------
*/

Fixed	&Fixed::operator=(const Fixed & rhs)
{
	//std::cout << "Copy assignment operator called" << std::endl;
		this->raw_bits = rhs.raw_bits;
	return (*this); // renvoie lobjet courant (this)
}

std::ostream & operator<<(std::ostream &os, const Fixed & rhs)
{
	os << rhs.toFloat();
	return (os);
}

bool	Fixed::operator>(const Fixed & rhs) const
{
	return (this->raw_bits > rhs.raw_bits);
}

bool	Fixed::operator<(const Fixed & rhs) const
{
	return (this->raw_bits < rhs.raw_bits);
}

bool	Fixed::operator>=(const Fixed & rhs) const
{
	return (this->raw_bits >= rhs.raw_bits);
}

bool	Fixed::operator<=(const Fixed & rhs) const
{
	return (this->raw_bits <= rhs.raw_bits);
}

Fixed	Fixed::operator+(const Fixed & rhs) const
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(const Fixed & rhs) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(const Fixed & rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(const Fixed & rhs) const
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

bool	Fixed::operator==(const Fixed & rhs) const
{
	return (this->raw_bits == rhs.raw_bits);
}

Fixed	Fixed::operator!=(const Fixed & rhs) const
{
	return (this->raw_bits != rhs.raw_bits);
}

Fixed	& Fixed::operator++(void)
{
	raw_bits++;
	return (*this);
}

Fixed	Fixed::operator++(int number)
{
	Fixed	new_value = *this; //on prends la valeur actuelle de lobjet
	if (number != 0)
		raw_bits += number;
	else
		raw_bits++; // on augmente la valeur
	return (new_value); // on retourne la valeur avant quelle est ai augmente
}

Fixed	& Fixed::operator--(void)
{
	raw_bits--;
	return (*this);
}

Fixed	Fixed::operator--(int number)
{
	Fixed	new_value = *this;
	if (number != 0)
		raw_bits -= number;
	else
		raw_bits--;
	return (new_value);
}

/*
	--------------------------- FUNCTION --------------------------------------
*/

Fixed	& Fixed::min(Fixed & src1, Fixed & src2)
{
	if (src1.raw_bits < src2.raw_bits)
		return (src1);
	else
		return (src2);
}


Fixed const	& Fixed::max(Fixed const & src1, Fixed const & src2)
{
	if (src1.raw_bits > src2.raw_bits)
		return (src1);
	else
		return (src2);
}

const Fixed & Fixed::min(const Fixed & src1, const Fixed & src2)
{
	if (src1.raw_bits > src2.raw_bits)
		return (src1);
	else
		return (src2);
}

int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->raw_bits);
}

float	Fixed::toFloat(void) const
{
	return (this->raw_bits / (float)(1 << this->bits));
}

int Fixed::toInt(void) const
{
	return (this->raw_bits >> this->bits);
}

void	Fixed::setRawBits(int const raw)
{
	raw_bits = raw;
}
