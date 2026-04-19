/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 12:38:20 by eganas            #+#    #+#             */
/*   Updated: 2026/04/19 14:17:06 by eganas           ###   ########.fr       */
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

	std::cout << "__________Brain Test__________" << std::endl << std::endl;

	std::cout << "_____Dog Test_____" << std::endl << std::endl;
	
		Dog guard;
	
		std::cout << std::endl;	
		guard.getBrain()->setIdea(0, "Guard");
	
	{
		Dog dcopy = guard;
		dcopy.getBrain()->setIdea(0, "Protection");
		
		std::cout << std::endl;
		guard.displayIdeas();
		dcopy.displayIdeas();
	}
	
	std::cout << std::endl;	
	std::cout << "_____Cat Test_____" << std::endl << std::endl;

		Cat sleepy;
	
		std::cout << std::endl;	
		sleepy.getBrain()->setIdea(0, "Sleep");
	{
		Cat ccopy = sleepy;
		ccopy.getBrain()->setIdea(0, "Tired");
		
		std::cout << std::endl;
		sleepy.displayIdeas();
		ccopy.displayIdeas();
	}

	std::cout << "__________Destructors__________" << std::endl << std::endl;

	for (int i = 0; i < nbAnimals; i++)
		delete aShelter[i];
	delete dog;
	delete cat;
	return 0;
}
