/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 13:15:47 by eganas            #+#    #+#             */
/*   Updated: 2026/04/07 14:40:45 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}
Harl::~Harl() {}

void Harl::complain( std::string level )
{
	void (Harl::*levelPtr[4])(void) const = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string arrayLevel[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (arrayLevel[i] == level)
		{
			(this->*levelPtr[i])();
			return;
		}
	}
	std::cout << "Usage Error : DEBUG, INFO, WARNING or ERROR" << std::endl;
}

void Harl::debug (void) const
{
	std::cout << std::left << std::setw(9) << "DEBUG: " << std::endl
		<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!" << std::endl;
}

void Harl::info (void) const
{
	std::cout << std::left << std::setw(9) << "INFO: " << std::endl
		<< "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger!\nIf you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning (void) const
{
	std::cout << std::left << std::setw(9) << "WARNING: " << std::endl
		<< "I think I deserve to have some extra bacon for free.\nI’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error (void) const
{
	std::cout << std::left << std::setw(9) << "ERROR: " << std::endl
		<< "This is unacceptable!\nI want to speak to the manager now." << std::endl;
}
