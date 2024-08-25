/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:26:14 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/25 16:43:32 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>	
#include <cmath>
#include "Fixed.hpp"

class Point
{
	private:
		Fixed	_x;
		Fixed	_y;

	public:
		Point();
		Point(const Point &other);
		~Point();
		Point	&operator =(const Point &other);

		Point(const Point &other, const Point &another);
		Point(Fixed const x, Fixed const y);

		Fixed	getX(void) const;
		Fixed	getY(void) const;

		static Fixed	crossProduct2D(const Point &other,
			const Point &another);
};

std::ostream& operator<<(std::ostream& os, const Point& obj);

#endif