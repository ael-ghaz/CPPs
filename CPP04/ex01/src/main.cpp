/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 12:38:20 by eganas            #+#    #+#             */
/*   Updated: 2026/04/13 22:25:28 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"

int main( void ) {
	
	std::cout << "__________Casual Test__________" << std::endl << std::endl;

	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	
	std::cout << "__________Deep Test__________" << std::endl << std::endl;

	int nbAnimals = 4;
	Animal *aShelter[nbAnimals];

	for (int i = 0; i < nbAnimals; i++)
	{
		if (i < nbAnimals / 2)
			aShelter[i] = new Dog();
		else
			aShelter[i] = new Cat();
	}

	for (int i = 0; i < nbAnimals; i++)
		aShelter[i]->makeSound();

	std::cout << "__________Destructors__________" << std::endl << std::endl;

	for (int i = 0; i < nbAnimals; i++)
		delete aShelter[i];
	delete dog;
	delete cat;
	return 0;
}
