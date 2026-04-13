/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 18:10:04 by eganas            #+#    #+#             */
/*   Updated: 2026/04/13 21:41:48 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Brain.hpp"
#include "Animal.hpp"

class Dog : public Animal
{
	Brain* _dogBrain;

public:
	Dog();
	Dog(Dog const &dog);
	Dog &operator=(Dog const &dog);
	~Dog();
	
	void makeSound() const;
};

#endif