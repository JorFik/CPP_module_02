/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:29:17 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/25 16:43:38 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {};

Point::Point(const Point &other) : _x(other.getX()), _y(other.getY()) {};

Point::~Point() {};

Point	&Point::operator =(const Point &other)
{
	if (this == &other)
		return (*this);
	this->_x = other.getX();
	this->_y = other.getY();
	return (*this);
}

Point::Point(Fixed const x, Fixed const y) : _x(x), _y(y) {};

Point::Point(const Point &other, const Point &another) :
	_x(another.getX() - other.getX()),
	_y(another.getY() - other.getY()) {};

Fixed	Point::getX(void) const
{
	return (this->_x);
}

Fixed	Point::getY(void) const
{
	return (this->_y);
}

Fixed	Point::crossProduct2D(const Point &other, const Point &another)
{
	return ((other.getX() * another.getY()) - (other.getY() * another.getX()));
}

std::ostream& operator<<(std::ostream& os, const Point& obj)
{
	os << "(" << obj.getX() << ", " << obj.getY() << ")";
	return (os);
}
