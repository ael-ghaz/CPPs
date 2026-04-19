/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 18:35:29 by eganas            #+#    #+#             */
/*   Updated: 2026/04/19 13:25:33 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain* _catBrain;

public:
	Cat();
	Cat(Cat const &cat);
	Cat &operator=(Cat const &cat);
	~Cat();
	
	void makeSound() const;
	void displayIdeas() const;
	Brain *getBrain() const;
};

#endif