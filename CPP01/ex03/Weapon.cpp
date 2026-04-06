/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 20:59:31 by eganas            #+#    #+#             */
/*   Updated: 2026/04/06 02:56:33 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const &newtype) : type(newtype) {}

Weapon::~Weapon() {}

std::string const &Weapon::getType() const
{
	return this->type;
}
void Weapon::setType(std::string const &type)
{
	this->type = type;
}
