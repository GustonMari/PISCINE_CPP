/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 09:42:30 by gmary             #+#    #+#             */
/*   Updated: 2022/04/25 09:50:09 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
	public:
		Point();
		Point(const float nb1, const float nb2);
		Point(const Point & src);
		Point & operator=(const Point &src);
		~Point();
	private:
		Fixed	x;
		Fixed	y;
};