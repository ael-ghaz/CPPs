/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 12:38:20 by eganas            #+#    #+#             */
/*   Updated: 2026/04/13 19:54:56 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main( void ) {
	
	std::cout << "__________Casual Test__________" << std::endl << std::endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << "__________Wrong Test__________" << std::endl << std::endl;

	const WrongAnimal *wanim = new WrongAnimal();
	const WrongAnimal *wcat = new WrongCat();

	std::cout << wcat->getType() << " " << std::endl;
	wcat->makeSound();
	wanim->makeSound();

	std::cout << "__________Destructors__________" << std::endl << std::endl;

	delete meta;
	delete j;
	delete i;

	delete wanim;
	delete wcat;
	return 0;
}
