/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 18:17:57 by eganas            #+#    #+#             */
/*   Updated: 2026/04/13 21:41:42 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : _dogBrain(new Brain())
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "Dog : Default constructor called!" 
		<< "   ***" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(Dog const &dog) : Animal(dog), _dogBrain(new Brain(*dog._dogBrain))
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "Dog: Copy constructor called!"
		<< "   ***" << std::endl;
}

Dog &Dog::operator=(Dog const &dog)
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "Dog: Copy assignment operator called!"
		<< "   ***" << std::endl;
	if (this != &dog)
	{
		Animal::operator=(dog);
		if (this->_dogBrain)
			delete this->_dogBrain;
		this->_dogBrain = new Brain(*dog._dogBrain);
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "Dog: Destructor called!"
		<< "   ***" << std::endl;
	delete this->_dogBrain;
}

void Dog::makeSound() const
{
	std::cout << "Dog: Woof Woof !" << std::endl;
}
