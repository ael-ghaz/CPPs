/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 20:12:54 by eganas            #+#    #+#             */
/*   Updated: 2026/04/13 22:19:27 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "***   " << std::left << std::setw(40)
	<< "Brain: Default constructor called!"
	<< "   ***" << std::endl;
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
		for (int i = 0; i < 100; i++)
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
