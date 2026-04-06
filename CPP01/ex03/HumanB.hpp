/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 20:59:23 by eganas            #+#    #+#             */
/*   Updated: 2026/04/06 02:56:26 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
    std::string	_name;
    Weapon		*_weapon;

public:
    HumanB(std::string name);
    ~HumanB();

	void attack();
    void setWeapon(Weapon &weapon);
};

#endif