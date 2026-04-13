/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 17:26:51 by eganas            #+#    #+#             */
/*   Updated: 2026/04/13 23:13:47 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Unknown")
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "Animal : Default constructor called!" 
		<< "   ***" << std::endl;
}

Animal::Animal(Animal const &animal)
{
	std::cout << "***   " << std::left << std::setw(40)
	<< "Animal: Copy constructor called!"
	<< "   ***" << std::endl;
	*this = animal;
}

Animal &Animal::operator=(Animal const &animal)
{
	std::cout << "***   " << std::left << std::setw(40)
	<< "Animal: Copy assignment operator called!"
	<< "   ***" << std::endl;
	if (this != &animal)
		this->_type = animal.getType();
	return (*this);
}

Animal::~Animal()
{
	std::cout << "***   " << std::left << std::setw(40)
	<< "Animal: Destructor called!"
	<< "   ***" << std::endl;
}

std::string Animal::getType() const
{
	return (this->_type);
}

void Animal::setType(std::string type)
{
	this->_type = type;
}
