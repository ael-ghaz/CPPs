/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 12:38:20 by eganas            #+#    #+#             */
/*   Updated: 2026/04/13 01:48:06 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void ) {
	ClapTrap ct("CB12");

	ct.attack("ESP27");
	ct.attack("ESP27");
	ct.attack("ESP27");
	ct.attack("ESP27");
	ct.attack("ESP27");
	ct.attack("ESP27");
	ct.attack("ESP27");
	ct.attack("ESP27");
	ct.attack("ESP27");
	ct.attack("ESP27");
	ct.attack("ESP27");
	ct.takeDamage(3);
	ct.beRepaired(2);

	ct.takeDamage(9);
	ct.beRepaired(2);
	ct.attack("ESP27");

	std::cout << std::endl;
	
	ScavTrap st("CHE22");

	st.attack("R2D2");
	st.takeDamage(10);
	st.beRepaired(5);
	st.guardGate();

	st.takeDamage(100);
	st.beRepaired(5);
	st.attack("R2D2");
	st.guardGate();

	std::cout << std::endl;

	FragTrap ft("VIR15");

	ft.attack("X998");
	ft.takeDamage(20);
	ft.beRepaired(10);
	ft.highFivesGuys();

	ft.takeDamage(90);
	ft.attack("X998");
	ft.beRepaired(10);
	ft.highFivesGuys();
	
	return 0;
}
