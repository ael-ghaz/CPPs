/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 17:48:12 by eganas            #+#    #+#             */
/*   Updated: 2026/04/10 15:12:31 by eganas           ###   ########.fr       */
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
	bool	operator>(Fixed const &fixed) const;
	bool	operator<(Fixed const &fixed) const;
	bool	operator>=(Fixed const &fixed) const;
	bool	operator<=(Fixed const &fixed) const;
	bool	operator==(Fixed const &fixed) const;
	bool	operator!=(Fixed const &fixed) const;
	Fixed operator+(Fixed const &fixed) const;
	Fixed operator-(Fixed const &fixed) const;
	Fixed operator*(Fixed const &fixed) const;
	Fixed operator/(Fixed const &fixed) const;
	Fixed &operator++();
	Fixed operator++(int n);
	Fixed &operator--();
	Fixed operator--(int n);
	~Fixed();

	static Fixed &min(Fixed &fixed1, Fixed &fixed2);
	static Fixed const &min(Fixed const &fixed1, Fixed const &fixed2);
	static Fixed &max(Fixed &fixed1, Fixed &fixed2);
	static Fixed const &max(Fixed const &fixed1, Fixed const &fixed2);

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	float toInt( void ) const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &fixed);

#endif