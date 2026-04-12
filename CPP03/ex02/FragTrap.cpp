/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 01:11:11 by eganas            #+#    #+#             */
/*   Updated: 2026/04/13 01:34:39 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Unknown")
{
	std::cout << "***   A FragTrap named " << std::left << std::setw(40)
		<< (this->_name + " is born !")
		<< "   ***" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attDmg = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attDmg = 30;
	std::cout << "***   A FragTrap named " << std::left << std::setw(40)
		<< (name + " is born !")
		<< "   ***" << std::endl;
}

FragTrap::FragTrap(FragTrap const &ft) : ClapTrap(ft)
{
	std::cout << "***   A FragTrap named " << std::left << std::setw(40)
		<< (this->_name + " is born from " + ft.getName() + "'s copy")
		<< "   ***" << std::endl;
}
FragTrap &FragTrap::operator=(FragTrap const &ft)
{
	if (this != &ft)
		ClapTrap::operator=(ft);
	return (*this);	
}

FragTrap::~FragTrap()
{
	std::cout << "***   A FragTrap named " << std::left << std::setw(40)
		<< (this->_name + " has been destroyed !")
		<< "   ***" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (this->_hit_points == 0)
	{
		std::cout << "FragTrap " << this->_name << " is too dead to give a high five" << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->_name << " want to give you a high five✋ cause you're so cool" << std::endl;
}
