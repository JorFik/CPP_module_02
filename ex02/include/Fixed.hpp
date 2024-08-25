/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 18:28:28 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/25 14:17:18 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					_value;
		static const int	_fractionalBits = 8;
	
	public:
	// OCC form functions
		Fixed();
		Fixed(const Fixed &other);
		~Fixed();
		Fixed	&operator =(const Fixed &other);

	// Other constructors
		Fixed(const int value);
		Fixed(const float value);

	// Raw Bits functions
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	// Conversion functions
		int		toInt(void) const;
		float	toFloat(void) const;

		// Overloading the comparison operators
		bool	operator >(const Fixed &other) const;
		bool	operator <(const Fixed &other) const;
		bool	operator >=(const Fixed &other) const;
		bool	operator <=(const Fixed &other) const;
		bool	operator ==(const Fixed &other) const;
		bool	operator !=(const Fixed &other) const;

		// Overloading the arithmetic operators
		Fixed	operator +(const Fixed &other) const;
		Fixed	operator -(const Fixed &other) const;
		Fixed	operator *(const Fixed &other) const;
		Fixed	operator /(const Fixed &other) const;

		// Overloading the increment and decrement operators
		Fixed	&operator ++(void);
		Fixed	&operator --(void);
		Fixed	operator ++(int);
		Fixed	operator --(int);

		// Static functions
		static Fixed		&min(Fixed &a, Fixed &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif