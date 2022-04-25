/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:14:23 by gmary             #+#    #+#             */
/*   Updated: 2022/04/25 16:15:35 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float n);
		Fixed(const Fixed &src);
		~Fixed();
		Fixed	&operator=(const Fixed & src);
		Fixed	operator+(const Fixed & rhs) const;
		Fixed	operator-(const Fixed & rhs) const;
		Fixed	operator*(const Fixed & rhs) const;
		Fixed	operator/(const Fixed & rhs) const;
		bool	operator==(const Fixed & rhs) const;
		Fixed	operator!=(const Fixed & rhs) const;
		Fixed	& operator++();
		Fixed	operator++(int number);
		Fixed	& operator--();
		Fixed	operator--(int number);
		bool	operator>(const Fixed & rhs) const;
		bool	operator<(const Fixed & rhs) const;
		bool	operator>=(const Fixed & rhs) const;
		bool	operator<=(const Fixed & rhs) const;
		static	Fixed & min(Fixed & src1, Fixed & src2);
		static	Fixed const & min(Fixed const & src1, Fixed const & src2);
		static	Fixed & max(Fixed & src1, Fixed & src2);
		static	const Fixed & max(const Fixed & src1, const Fixed & src2);
		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits() const;
		void	setRawBits(int const raw);
	private:
		int	raw_bits;
		static const int bits = 8;
};
	std::ostream & operator<<(std::ostream &os, const Fixed &src);

#endif