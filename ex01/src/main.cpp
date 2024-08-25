/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 20:07:18 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/25 13:08:49 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <limits>

int	main(void)
{
	Fixed	a;
	std::cout << std::endl;
	const Fixed	b( 10 );
	std::cout << std::endl;
	const Fixed	c( 42.42f );
	std::cout << std::endl;
	const Fixed	d( b );
	std::cout << std::endl;
	const Fixed	e(8388607); // numbers after -8.388.600 are loosing precision
	std::cout << std::endl;
	const Fixed	f(-8388608); // numbers after -8.388.600 are loosing precision
	std::cout << std::endl;

	a = Fixed( 1234.4321f );
	std::cout << std::endl;

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "e is " << e << std::endl;
	std::cout << "f is " << f << std::endl;
	std::cout << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	std::cout << "e is " << e.toInt() << " as integer" << std::endl;
	std::cout << "f is " << f.toInt() << " as integer" << std::endl;
	std::cout << std::endl;
	return (0);
}
