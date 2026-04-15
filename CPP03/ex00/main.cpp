/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-ghaz <ael-ghaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 12:38:20 by eganas            #+#    #+#             */
/*   Updated: 2026/04/15 15:39:34 by ael-ghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main( void ) {
	ClapTrap ct("CB12");

	ct.attack("ESP27");
	ct.attack("ESP27");
	ct.takeDamage(3);
	ct.beRepaired(2);
	std::cout << std::endl;
	ct.attack("ESP27");
	ct.attack("ESP27");
	ct.attack("ESP27");
	ct.attack("ESP27");
	ct.attack("ESP27");
	ct.attack("ESP27");
	ct.attack("ESP27");
	ct.attack("ESP27");
	ct.attack("ESP27");
	ct.takeDamage(9);
	ct.beRepaired(2);
	ct.attack("ESP27");
	return 0;
}
