/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 17:48:45 by eganas            #+#    #+#             */
/*   Updated: 2026/04/07 21:50:19 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fpt(0) { std::cout << "Default constructor called" << std::endl; }

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fpt = value << _bits;
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fpt = roundf(value * (1 << this->_bits));
}

Fixed::Fixed(Fixed const &fixed) 
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed &Fixed::operator=(Fixed const &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(fixed.getRawBits());
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return out;
}

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

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
