/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:14:23 by gmary             #+#    #+#             */
/*   Updated: 2022/04/21 13:11:28 by gmary            ###   ########.fr       */
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
		Fixed &operator=(const Fixed &src);
		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits() const;
		void setRawBits(int const raw);
	private:
		int	raw_bits;
		static const int bits = 8;
};

#endif