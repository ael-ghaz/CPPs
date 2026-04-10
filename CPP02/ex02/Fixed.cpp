/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 17:48:45 by eganas            #+#    #+#             */
/*   Updated: 2026/04/10 15:34:08 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fpt(0) { /*std::cout << "Default constructor called" << std::endl;*/ }

Fixed::Fixed(int const value)
{
	// std::cout << "Int constructor called" << std::endl;
	this->_fpt = value << _bits;
}

Fixed::Fixed(float const value)
{
	// std::cout << "Float constructor called" << std::endl;
	this->_fpt = roundf(value * (1 << this->_bits));
}

Fixed::Fixed(Fixed const &fixed) 
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

/*---------------------------------------------------------------------------*/

Fixed &Fixed::operator=(Fixed const &fixed)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(fixed.getRawBits());
	return (*this);
}

bool	Fixed::operator>(Fixed const &fixed) const
{
	return (this->_fpt > fixed.getRawBits());
}

bool	Fixed::operator<(Fixed const &fixed) const
{
	return (this->_fpt < fixed.getRawBits());
}

bool	Fixed::operator>=(Fixed const &fixed) const
{
	return (this->_fpt >= fixed.getRawBits());
}

bool	Fixed::operator<=(Fixed const &fixed) const
{
	return (this->_fpt <= fixed.getRawBits());
}

bool	Fixed::operator==(Fixed const &fixed) const
{
	return (this->_fpt == fixed.getRawBits());
}

bool	Fixed::operator!=(Fixed const &fixed) const
{
	return (this->_fpt != fixed.getRawBits());
}

Fixed Fixed::operator+(Fixed const &fixed) const
{
	return (this->toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(Fixed const &fixed) const
{
	return (this->toFloat() - fixed.toFloat());
}

Fixed Fixed::operator*(Fixed const &fixed) const
{
	return (this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(Fixed const &fixed) const
{
	return (this->toFloat() / fixed.toFloat());
}

Fixed &Fixed::operator++()
{
	this->_fpt++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);

	this->_fpt++;
	return (tmp);
}

Fixed &Fixed::operator--()
{
	this->_fpt--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);

	this->_fpt--;
	return (tmp);
}

/*----------------------------------------------------------------------------*/

Fixed &Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 < fixed2)
		return (fixed1);
	return (fixed2);
}
Fixed const &Fixed::min(Fixed const &fixed1, Fixed const &fixed2)
{
	if (fixed1 < fixed2)
		return (fixed1);
	return (fixed2);
}
Fixed &Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 > fixed2)
		return (fixed1);
	return (fixed2);
}
Fixed const &Fixed::max(Fixed const &fixed1, Fixed const &fixed2)
{
	if (fixed1 > fixed2)
		return (fixed1);
	return (fixed2);
}

/*----------------------------------------------------------------------------*/


std::ostream &operator<<(std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return out;
}

Fixed::~Fixed() { /*std::cout << "Destructor called" << std::endl;*/ }

float Fixed::toFloat( void ) const
{
	return ((float)this->_fpt / (float)(1 << this->_bits));
}

float Fixed::toInt( void ) const
{
	return (this->_fpt >> this->_bits);
}

int Fixed::getRawBits( void ) const
{
	return (this->_fpt);
}
void Fixed::setRawBits( int const raw )
{
	this->_fpt = raw;
}
