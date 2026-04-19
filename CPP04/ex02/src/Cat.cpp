/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 18:36:30 by eganas            #+#    #+#             */
/*   Updated: 2026/04/19 13:25:38 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : _catBrain(new Brain())
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "Cat : Default constructor called!" 
		<< "   ***" << std::endl;
	this->_type = "Cat";
	for (int i = 0; i < TEST; i++)
		this->_catBrain->setIdea(i, "Fish");
}

Cat::Cat(Cat const &cat) : Animal(cat), _catBrain(new Brain(*cat._catBrain))
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
	{
		Animal::operator=(cat);
		if (this->_catBrain)
			delete this->_catBrain;
		this->_catBrain = new Brain(*cat._catBrain);
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "Cat: Destructor called!"
		<< "   ***" << std::endl;
	delete this->_catBrain;
}

void Cat::makeSound() const
{
	std::cout << "Cat: Meow Meow !" << std::endl;
}

void Cat::displayIdeas() const
{
	for (int i = 0; i < IDEAS; i++)
	{
		if (this->_catBrain->getIdea(i).empty())
			break;
		std::cout << "Idea n°" << i << ": " << this->_catBrain->getIdea(i) << std::endl;
	}
	std::cout << std::endl;
}

Brain *Cat::getBrain() const
{
	return (this->_catBrain);
}
