/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 09:42:19 by gmary             #+#    #+#             */
/*   Updated: 2022/04/25 17:48:35 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*
	http://totologic.blogspot.com/2014/01/accurate-point-in-triangle-test.html
	bonne approche aussi
	https://www.gamedev.net/forums/topic.asp?topic_id=295943
*/

Fixed	ft_abs(Fixed number)
{
	if (number < 0)
		number = number * (- 1);
	return (number);
}

Fixed	CalculateArea(Point p1, Point p2, Point p3)
{
	Fixed	result;
	result = ((p1.get_x() - p3.get_x()) * (p2.get_y() - p3.get_y()))
			- ((p2.get_x() - p3.get_x()) * (p1.get_y() - p3.get_y()));
	return (ft_abs(result) / 2);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed TotalArea;
	Fixed Area1;
	Fixed Area2;
	Fixed Area3;
	if (point == a || point == b || point == c || CheckEdge(a, b, c, point))
		return (false);
	TotalArea = CalculateArea(a, b, c);
	Area1 = CalculateArea(point, b, c);
	Area2 = CalculateArea(point, a, c);
	Area3 = CalculateArea(point, a, b);
	if ((Area1 + Area2 + Area3) > TotalArea)
		return (false);
	return (true); // si faux, attention si le point est sur sur els cote ou sommet cest faux
}