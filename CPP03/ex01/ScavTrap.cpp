/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 19:31:14 by eganas            #+#    #+#             */
/*   Updated: 2026/04/12 21:32:59 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Unknown")
{
	std::cout << "***   A ScavTrap named " << std::left << std::setw(40)
		<< (this->_name + " is born !")
		<< "   ***" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attDmg = 20;	
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attDmg = 20;
	std::cout << "***   A ScavTrap named " << std::left << std::setw(40)
		<< (name + " is born !")
		<< "   ***" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &st) : ClapTrap(st)
{
	std::cout << "***   A ScavTrap named " << std::left << std::setw(40)
		<< (this->_name + " is born from " + st.getName() + "'s copy")
		<< "   ***" << std::endl;
}
ScavTrap &ScavTrap::operator=(ScavTrap const &st)
{
	if (this != &st)
		ClapTrap::operator=(st);
	return (*this);	
}

ScavTrap::~ScavTrap()
{
	std::cout << "***   A ScavTrap named " << std::left << std::setw(40)
		<< (this->_name + " has been destroyed !")
		<< "   ***" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_energy_points == 0)
	{
		std::cout << "ScavTrap " << this->_name << " is too tired to attack" << std::endl;
		return;
	}
	if (this->_hit_points == 0)
	{
		std::cout << "ScavTrap " << this->_name << " is too dead to attack" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->_name << " attacks "
		<< target << " , causing "
		<< this->_attDmg << " points of damage!"
		<< std::endl;
	this->_energy_points--;
}

void ScavTrap::guardGate()
{
	if (this->_hit_points == 0)
	{
		std::cout << "ScavTrap " << this->_name << " is too dead to be in Gate keeper mode " << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode " << std::endl;
}
