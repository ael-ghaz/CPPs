/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 12:38:20 by eganas            #+#    #+#             */
/*   Updated: 2026/04/14 12:21:46 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
{
	std::cout << "__________Main test__________" << std::endl;
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	std::cout << std::endl;
}
{
	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
	std::cout << std::endl;
}
{
	std::cout << "__________Other test__________" << std::endl;
	HumanB jack("Jack");
	jack.attack();
}
return 0;
}

