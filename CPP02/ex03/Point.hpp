/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 09:42:30 by gmary             #+#    #+#             */
/*   Updated: 2022/04/25 17:30:02 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class Point
{
	public:
		Point();
		Point(const float nbx, const float nby);
		Point(const Point & src);
		Point	& operator=(const Point &src);
		bool	operator==(const Point & rhs) const;
		Fixed	get_x();
		Fixed	get_y();
		~Point();
	private:
		Fixed	x;
		Fixed	y;
};

#endif