/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 18:28:28 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/24 20:05:50 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		int					_value;
		static const int	_fractionalBits = 8;
	
	public:
		Fixed();
		Fixed(const Fixed &other);
		~Fixed();
		Fixed &operator=(const Fixed &other);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif