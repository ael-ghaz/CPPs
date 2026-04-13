/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 19:39:28 by eganas            #+#    #+#             */
/*   Updated: 2026/04/13 19:42:31 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Unknown")
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "WrongAnimal : Default constructor called!" 
		<< "   ***" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &wanimal)
{
	std::cout << "***   " << std::left << std::setw(40)
	<< "WrongAnimal: Copy constructor called!"
	<< "   ***" << std::endl;
	*this = wanimal;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &wanimal)
{
	std::cout << "***   " << std::left << std::setw(40)
	<< "WrongAnimal: Copy assignment operator called!"
	<< "   ***" << std::endl;
	if (this != &wanimal)
		this->_type = wanimal.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "***   " << std::left << std::setw(40)
	<< "WrongAnimal: Destructor called!"
	<< "   ***" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}

void WrongAnimal::setType(std::string type)
{
	this->_type = type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal: Censored voice !" << std::endl;
}
