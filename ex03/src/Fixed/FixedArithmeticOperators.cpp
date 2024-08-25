/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedArithmeticOperators.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:57:12 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/25 14:35:48 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed	Fixed::operator +(const Fixed &other) const
{
	Fixed	result;

	result.setRawBits(this->_value + other.getRawBits());
	return (result);
}

Fixed	Fixed::operator -(const Fixed &other) const
{
	Fixed	result;

	result.setRawBits(this->_value - other.getRawBits());
	return (result);
}

Fixed	Fixed::operator *(const Fixed &other) const
{
	Fixed	result;

	result.setRawBits((this->_value * other.getRawBits()) >> _fractionalBits);
	return (result);
}

Fixed	Fixed::operator /(const Fixed &other) const
{
	Fixed	result;

	result.setRawBits((this->_value << _fractionalBits) / other.getRawBits());
	return (result);
}
