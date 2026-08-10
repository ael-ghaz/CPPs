/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 14:47:49 by eganas            #+#    #+#             */
/*   Updated: 2026/08/10 17:24:02 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "Intern : Default constructor called!" 
		<< "   ***" << std::endl;
}

Intern::Intern(Intern const &intern)
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "Intern: Copy constructor called!"
		<< "   ***" << std::endl;
	*this = intern;
}

Intern &Intern::operator=(Intern const &intern)
{
	(void)intern;
	std::cout << "***   " << std::left << std::setw(40)
		<< "Intern: Copy assignment operator called!"
		<< "   ***" << std::endl;

	return (*this);
}

Intern::~Intern()
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "Intern: Destructor called!"
		<< "   ***" << std::endl;
}

const char* Intern::FormNotFoundException::what() const throw() {
	return ("Form is not found.");
}

static AForm *makeShrubbery(std::string const &target)
{
	return (new ShrubberyCreationForm(target));
}

static AForm *makeRobot(std::string const &target)
{
	return (new RobotomyRequestForm(target));
}

static AForm *makePresidential(std::string const &target)
{
	return (new PresidentialPardonForm(target));
}

AForm *Intern::makeForm(std::string const &formName, std::string const &formTarget)
{
	std::string formNames[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	AForm *(*makeFormFct[3])(std::string const &) =  {
		&makeShrubbery,
		&makeRobot,
		&makePresidential
	};

	for (int i = 0; i < 3; i++) {
		if (formName == formNames[i])
		{
			std::cout << "Intern creates " << formName << std::endl;
			return (makeFormFct[i](formTarget));
		}
	}
	throw Intern::FormNotFoundException();
}