/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 20:59:08 by eganas            #+#    #+#             */
/*   Updated: 2026/04/14 12:17:09 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(0) {}
HumanB::~HumanB() {}

void HumanB::attack()
{
	if (this->_weapon)
    	std::cout << this->_name << " attacks with their " << (*this->_weapon).getType() << std::endl;
	else
		std::cout << this->_name << " attacks with their fists" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}
