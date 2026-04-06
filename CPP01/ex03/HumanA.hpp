/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 20:59:03 by eganas            #+#    #+#             */
/*   Updated: 2026/04/06 02:56:28 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
    std::string	_name;
    Weapon		&_weapon;

public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();

	void attack();
};

#endif