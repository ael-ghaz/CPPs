/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 16:38:36 by eganas            #+#    #+#             */
/*   Updated: 2026/04/13 01:45:32 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Unknown"), _hit_points(10), _energy_points(10), _attDmg(0)
{
	std::cout << "***   A ClapTrap named " << std::left << std::setw(40)
		<< (this->_name + " born !")
		<< "   ***" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attDmg(0)
{
	std::cout << "***   A ClapTrap named " << std::left << std::setw(40)
		<< (name + " born !")
		<< "   ***" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &ct)
{
	*this = ct;
}
ClapTrap &ClapTrap::operator=(ClapTrap const &ct)
{
	if (this != &ct)
	{
		this->_name = ct.getName();
		this->_hit_points = ct.getHitPoints();
		this->_energy_points = ct.getEnergyPoints();
		this->_attDmg = ct.getAttDmg();
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "***   A ClapTrap named " << std::left << std::setw(40)
		<< (this->_name + " destroyed !")
		<< "   ***" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_hit_points == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is too dead to attack" << std::endl;
		return;
	}
	else if (this->_energy_points == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is too tired to attack" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " attacks "
		<< target << " , causing "
		<< this->_attDmg << " points of damage!"
		<< std::endl;
	this->_energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is too dead to be more dead" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " took " << amount << " damages points" << std::endl;
	if (this->_hit_points > (int)amount)
	{
		this->_hit_points -= amount;
		std::cout << this->_name << " has now [" << this->_hit_points << " HP]" << std::endl;
	}
	else
	{
		this->_hit_points = 0;
		std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
	}
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is too dead to be repaired" << std::endl;
		return;
	}
	else if (this->_energy_points == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is too tired to repair itself" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " healed " << amount << " HP" << std::endl;
	this->_hit_points += amount;
	std::cout << this->_name << " has now [" << this->_hit_points << " HP]" << std::endl;
}

/*__________________________________________GETTERS___________________________________________________*/

std::string	ClapTrap::getName() const
{
	return (this->_name);
}

int			ClapTrap::getHitPoints() const
{
	return (this->_hit_points);
}

int			ClapTrap::getEnergyPoints() const
{
	return (this->_energy_points);
}

int			ClapTrap::getAttDmg() const
{
	return (this->_attDmg);
}
