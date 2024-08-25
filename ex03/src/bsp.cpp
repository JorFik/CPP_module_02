/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:50:06 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/25 16:52:09 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "bsp.hpp"
#include <iostream>

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Point	ab(a, b);
	Point	a_point(a, point);
	Fixed	direction_abp = Point::crossProduct2D(ab, a_point);
	Point	bc(b, c);
	Point	b_point(b, point);
	Fixed	direction_bcp = Point::crossProduct2D(bc, b_point);
	Point	ca(c, a);
	Point	c_point(c, point);
	Fixed	direction_cap = Point::crossProduct2D(ca, c_point);

	if (direction_abp >= 0 && direction_bcp >= 0 && direction_cap >= 0)
	{
		std::cout << "The point is inside the triangle" << std::endl;
		return (true);
	}
	else if (direction_abp <= 0 && direction_bcp <= 0 && direction_cap <= 0)
	{
		std::cout << "The point is inside the triangle" << std::endl;
		return (true);
	}
	else
	{
		std::cout << "The point is outside the triangle" << std::endl;
		return (false);
	}
}
