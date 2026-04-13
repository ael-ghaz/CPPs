/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 19:45:28 by eganas            #+#    #+#             */
/*   Updated: 2026/04/13 19:49:20 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "WrongCat : Default constructor called!" 
		<< "   ***" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &wcat) : WrongAnimal(wcat)
{
	std::cout << "***   " << std::left << std::setw(40)
	<< "WrongCat: Copy constructor called!"
	<< "   ***" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &wcat)
{
	std::cout << "***   " << std::left << std::setw(40)
	<< "WrongCat: Copy assignment operator called!"
	<< "   ***" << std::endl;
	if (this != &wcat)
		WrongAnimal::operator=(wcat);
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "***   " << std::left << std::setw(40)
	<< "WrongCat: Destructor called!"
	<< "   ***" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat: Meowewewewewewew !" << std::endl;
}
