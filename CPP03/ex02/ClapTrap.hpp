/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 19:15:25 by eganas            #+#    #+#             */
/*   Updated: 2026/04/12 21:16:12 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <iomanip>

class ClapTrap
{
protected:
	std::string	_name;
	int			_hit_points;
	int			_energy_points;
	int			_attDmg;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &ct);
	ClapTrap &operator=(ClapTrap const &ct);
	virtual ~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string	getName() const;
	int			getHitPoints() const;
	int			getEnergyPoints() const;
	int			getAttDmg() const;	
};

#endif