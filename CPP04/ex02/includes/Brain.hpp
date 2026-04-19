/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 20:07:41 by eganas            #+#    #+#             */
/*   Updated: 2026/04/19 12:53:02 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <iomanip>

#define IDEAS	100
#define TEST	5

class Brain
{
protected:
	std::string _ideas[IDEAS];

public:
	Brain();
	Brain(Brain const &brain);
	Brain &operator=(Brain const &Brain);
	~Brain();

	std::string getIdea(int index) const;
	void setIdea(int index, std::string const &idea);
};

#endif