/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 18:36:30 by eganas            #+#    #+#             */
/*   Updated: 2026/04/13 18:57:11 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "Cat : Default constructor called!" 
		<< "   ***" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat const &cat) : Animal(cat)
{
	std::cout << "***   " << std::left << std::setw(40)
	<< "Cat: Copy constructor called!"
	<< "   ***" << std::endl;
}

Cat &Cat::operator=(Cat const &cat)
{
	std::cout << "***   " << std::left << std::setw(40)
	<< "Cat: Copy assignment operator called!"
	<< "   ***" << std::endl;
	if (this != &cat)
		Animal::operator=(cat);
	return (*this);
}

Cat::~Cat()
{
	std::cout << "***   " << std::left << std::setw(40)
	<< "Cat: Destructor called!"
	<< "   ***" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Cat: Meow Meow !" << std::endl;
}
