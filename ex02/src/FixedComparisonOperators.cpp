/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedComparisonOperators.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:51:19 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/25 14:51:40 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

bool	Fixed::operator >(const Fixed &other) const
{
	return (_value > other.getRawBits());
}

bool	Fixed::operator <(const Fixed &other) const
{
	return (_value < other.getRawBits());
}

bool	Fixed::operator >=(const Fixed &other) const
{
	return (_value >= other.getRawBits());
}

bool	Fixed::operator <=(const Fixed &other) const
{
	return (_value <= other.getRawBits());
}

bool	Fixed::operator ==(const Fixed &other) const
{
	return (_value == other.getRawBits());
}

bool	Fixed::operator !=(const Fixed &other) const
{
	return (_value != other.getRawBits());
}
