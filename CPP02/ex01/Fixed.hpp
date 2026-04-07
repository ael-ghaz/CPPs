/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 17:48:12 by eganas            #+#    #+#             */
/*   Updated: 2026/04/07 21:39:08 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	int					_fpt;
	static const int	_bits = 8;

public:
	Fixed();
	Fixed(int const value);
	Fixed(float const value);
	Fixed(Fixed const &fixed);
	Fixed &operator=(Fixed const &fixed);
	~Fixed();

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	float toInt( void ) const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &fixed);

#endif