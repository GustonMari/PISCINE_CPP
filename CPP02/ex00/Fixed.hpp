/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:14:23 by gmary             #+#    #+#             */
/*   Updated: 2022/04/21 10:13:31 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &src);
		~Fixed();
		Fixed &operator=(const Fixed &src);
		int getRawBits() const;
		void setRawBits(int const raw);
	private:
		int	raw_bits;
		static const int bits = 8;
};

#endif