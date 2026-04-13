/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 17:23:08 by eganas            #+#    #+#             */
/*   Updated: 2026/04/13 23:13:44 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>

class Animal
{
protected:
	std::string _type;

public:
	Animal();
	Animal(Animal const &animal);
	Animal &operator=(Animal const &animal);
	virtual ~Animal();

	std::string getType() const;
	void setType(std::string type);
	virtual void makeSound() const = 0;
};

#endif