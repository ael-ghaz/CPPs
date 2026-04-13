/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 20:07:41 by eganas            #+#    #+#             */
/*   Updated: 2026/04/13 21:09:42 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <iomanip>

#define IDEAS 100

class Brain
{
protected:
	std::string _ideas[IDEAS];

public:
	Brain();
	Brain(Brain const &brain);
	Brain &operator=(Brain const &Brain);
	~Brain();
};

#endif