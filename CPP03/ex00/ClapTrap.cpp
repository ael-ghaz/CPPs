/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 16:38:36 by eganas            #+#    #+#             */
/*   Updated: 2026/04/10 19:03:16 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attDmg(0)
{
	std::cout << "***   " << name << " born !" << "   ***" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "***   " << this->_name << " dies !" << "   ***" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << this->_name << " attacks "
		<< target << " , causing "
		<< this->_attDmg << " points of damage!"
		<< std::endl;
	this->_energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " took " << amount << " damages points" << std::endl;
	this->_hit_points -= amount;
	std::cout << this->_name << " has now [" << this->_hit_points << " HP]" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " healed " << amount << " HP" << std::endl;
	this->_hit_points += amount;
	std::cout << this->_name << " has now [" << this->_hit_points << " HP]" << std::endl;
}
