/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 09:42:27 by gmary             #+#    #+#             */
/*   Updated: 2022/06/03 12:12:22 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*
	--------------------------- CONSTRUCTOR --------------------------------------
*/

Point::Point(void) : x(0) , y(0)
{
	
}

Point::Point(const float nbx, const float nby): x(nbx), y(nby)
{
	
}

Point::Point(const Point & src): x(src.x), y(src.y)
{
	
}

Point::~Point(void)
{
	
}

/*
	--------------------------- OPERATOR OVERLOAD --------------------------------------
*/

Point	& Point::operator=(const Point & src)
{
	Fixed * ptr_y = const_cast<Fixed *>(&(this->y));
	Fixed * ptr_x = const_cast<Fixed *>(&(this->x));

	*ptr_x = src.x;
	*ptr_y = src.y;
	return (*this);
}

bool	Point::operator==(const Point & rhs) const
{
	return (((this->x == rhs.x) && (this->y == rhs.y)));
}

/*
	--------------------------- FUNCTION --------------------------------------
*/

Fixed	Point::get_x(void)
{
	return (this->x);
}

Fixed	Point::get_y(void)
{
	return (this->y);
}