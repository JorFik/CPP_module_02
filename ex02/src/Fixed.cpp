/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 20:04:01 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/25 14:24:42 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// OCC form functions
Fixed::Fixed(): _value(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other): _value(other.getRawBits())
{
	// std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	_value = other.getRawBits();
	return (*this);
}


// Raw Bits functions
int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void Fixed::setRawBits(const int raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}


// Other constructors
Fixed::Fixed(const int value): _value(value << _fractionalBits)
{
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
{
	this->_value = static_cast<int>(roundf(value * (1 << _fractionalBits)));
	// std::cout << "Float constructor called" << std::endl;
}


// Conversion functions
int Fixed::toInt(void) const
{
	return (_value >> _fractionalBits);
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(this->_value) / (1 << _fractionalBits));
}

// Overloading the stream insertion operator
std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return (os);
}
