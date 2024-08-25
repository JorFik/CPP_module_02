/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 20:07:18 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/25 16:56:04 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include "bsp.hpp"
#include <iostream>
#include <limits>

int	main(void)
{
	Point	left;
	Point	top(Fixed(-4), Fixed(5));
	Point	right(Fixed(6), Fixed(1));
	Point	point(Fixed(2), Fixed(2));
	bool	is_inside;

	std::cout << "Triangle points:" << std::endl;
	std::cout << "Top:	" << top << std::endl;
	std::cout << "Left:	" << left << std::endl;
	std::cout << "Right:	" << right << std::endl;

	std::cout << std::endl;
	std::cout << "Point:	" << point << std::endl;

	is_inside = bsp(top, left, right, point);
	return (0);
}

/*
Visualisation tool:
	https://www.geogebra.org/calculator/hewktfpd
*/