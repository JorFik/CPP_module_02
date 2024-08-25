/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedIncrementDecrementOperators.cpp               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:02:55 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/25 14:51:02 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Pre operators
Fixed	&Fixed::operator ++(void)
{
	_value++;
	return (*this);
}

Fixed	&Fixed::operator --(void)
{
	_value--;
	return (*this);
}

// Post operator
Fixed	Fixed::operator ++(int)
{
	Fixed	tmp(*this);

	++(*this);
	return (tmp);
}

Fixed	Fixed::operator --(int)
{
	Fixed	tmp(*this);

	--(*this);
	return (tmp);
}
