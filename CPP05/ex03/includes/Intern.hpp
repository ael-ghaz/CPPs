/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 14:47:38 by eganas            #+#    #+#             */
/*   Updated: 2026/08/10 17:23:01 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <iomanip>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {

public:
	Intern();
	Intern(Intern const &intern);
	Intern &operator=(Intern const &intern);
	~Intern();

	class FormNotFoundException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	AForm *makeForm(std::string const &formName, std::string const &formTarget);
};

#endif