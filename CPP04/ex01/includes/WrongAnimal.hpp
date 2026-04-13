/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 19:09:14 by eganas            #+#    #+#             */
/*   Updated: 2026/04/13 19:56:18 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <iomanip>

class WrongAnimal
{
protected:
	std::string _type;

public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const &wanimal);
	WrongAnimal &operator=(WrongAnimal const &wanimal);
	~WrongAnimal();

	std::string getType() const;
	void setType(std::string type);
	void makeSound() const;
};

#endif