/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 20:07:18 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/25 14:54:03 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <limits>

int	main(void)
{
	Fixed a;
	Fixed const b(Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "A:			" << std::flush;
	std::cout << a << std::endl;
	std::cout << "++A:			" << std::flush;
	std::cout << ++a << std::endl;
	std::cout << "A:			" << std::flush;
	std::cout << a << std::endl;
	std::cout << "A++:			" << std::flush;
	std::cout << a++ << std::endl;
	std::cout << "A:			" << std::flush;
	std::cout << a << std::endl;

	std::cout << std::endl;
	std::cout << "B:			" << std::flush;
	std::cout << b << std::endl;
	std::cout << "B + 2.5:		" << std::flush;
	std::cout << b + Fixed( 2.5f ) << std::endl;
	std::cout << "B + 2.5:		" << std::flush;
	std::cout << b + 2.5f << std::endl;
	std::cout << "B - 2:			" << std::flush;
	std::cout << b - Fixed( 2 ) << std::endl;
	std::cout << "B * 2:			" << std::flush;
	std::cout << b * Fixed( 2 ) << std::endl;
	std::cout << "B / 10:			" << std::flush;
	std::cout << b / 10 << std::endl;
	std::cout << "B / 10:			" << std::flush;
	std::cout << b / Fixed(10) << std::endl;

	std::cout << std::endl;
	std::cout << "Max(a, b):		" << std::flush;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << "Min(a, b):		" << std::flush;
	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << "Max(b - 2, b / 2):	" << std::flush;
	std::cout << Fixed::max( b - Fixed( 2 ), b / Fixed( 2 ) ) << std::endl;
	std::cout << "Min(b - 2, b / 2):	" << std::flush;
	std::cout << Fixed::min( b - Fixed( 2 ), b / Fixed( 2 ) ) << std::endl;

	std::cout << std::endl;
	std::cout << "A > B:			" << std::flush;
	std::cout << (a > b) << std::endl;
	std::cout << "A < B:			" << std::flush;
	std::cout << (a < b) << std::endl;
	std::cout << "A >= B:			" << std::flush;
	std::cout << (a >= b) << std::endl;
	std::cout << "A <= B:			" << std::flush;
	std::cout << (a <= b) << std::endl;
	std::cout << "A <= A:			" << std::flush;
	std::cout << (a <= a) << std::endl;
	std::cout << "A < A:			" << std::flush;
	std::cout << (a < a) << std::endl;
	std::cout << "A == B:			" << std::flush;
	std::cout << (a == b) << std::endl;
	std::cout << "B == B:			" << std::flush;
	std::cout << (b == b) << std::endl;
	std::cout << "A != B:			" << std::flush;
	std::cout << (a != b) << std::endl;
	std::cout << "A != A:			" << std::flush;
	std::cout << (a != a) << std::endl;

	return (0);
}
