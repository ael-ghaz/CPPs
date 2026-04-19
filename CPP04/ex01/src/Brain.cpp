/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 20:12:54 by eganas            #+#    #+#             */
/*   Updated: 2026/04/19 12:53:45 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "***   " << std::left << std::setw(40)
	<< "Brain: Default constructor called!"
	<< "   ***" << std::endl;
	for (int i = 0; i < TEST; i++)
		_ideas[i] = "";
}

Brain::Brain(Brain const &brain)
{
	std::cout << "***   " << std::left << std::setw(40)
	<< "Brain: Copy constructor called!"
	<< "   ***" << std::endl;
	*this = brain;
}

Brain &Brain::operator=(Brain const &brain)
{
	std::cout << "***   " << std::left << std::setw(40)
	<< "Brain: Copy assignment operator called!"
	<< "   ***" << std::endl;
	if (this != &brain)
	{
		for (int i = 0; i < IDEAS; i++)
			this->_ideas[i] = brain._ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "***   " << std::left << std::setw(40)
	<< "Brain: Destructor called!"
	<< "   ***" << std::endl;
}

std::string Brain::getIdea(int index) const
{
	if (index < 0 || index >= IDEAS)
	{
		std::cout << "Error: index invalid" << std::endl;
		return "";
	}
	return (this->_ideas[index]);
}

void Brain::setIdea(int index, std::string const &idea)
{
	if (index < 0 || index >= IDEAS)
	{
		std::cout << "Error: index invalid" << std::endl;
		return;
	}
	this->_ideas[index] = idea;
}
