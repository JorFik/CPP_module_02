/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 18:28:28 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/25 12:18:24 by JFikents         ###   ########.fr       */
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
		Fixed();
		Fixed(const Fixed &other);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed();
		Fixed			&operator=(const Fixed &other);
		int				getRawBits(void) const;
		void			setRawBits(int const raw);
		int				toInt(void) const;
		float			toFloat(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif