/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 18:54:19 by eganas            #+#    #+#             */
/*   Updated: 2026/08/10 17:33:56 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {

	srand(time(NULL));
	std::cout << std::endl << "__________BASIC TESTS__________" << std::endl << std::endl;

	try 
	{
		Bureaucrat marc("Marc", 10);
		Bureaucrat jean("Jean", 5);
		Intern someRandomIntern;
		AForm *scf;
		AForm *rrf;
		AForm *ppf;

		scf = someRandomIntern.makeForm("shrubbery creation", "Montgeon");
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		ppf = someRandomIntern.makeForm("presidential pardon", "Jack Sparrow");

		marc.signForm(*scf);
		marc.signForm(*ppf);
		marc.signForm(*rrf);
		
		jean.executeForm(*scf);
		jean.executeForm(*rrf);
		jean.executeForm(*ppf);
		
		if (scf)
			delete scf;
		if (rrf)
			delete rrf;
		if (ppf)
			delete ppf;
	} catch (std::exception & e) 
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "__________GRADE EXCEPTIONS__________" << std::endl << std::endl;

	try {
		Bureaucrat michel("Michel", 50);
		Bureaucrat joseph("Joseph", 40);
		Intern someRandomIntern;
		AForm *randomForm;

		randomForm = someRandomIntern.makeForm("form that doesnt exist", "Bender");
		michel.signForm(*randomForm);
		joseph.executeForm(*randomForm);
		if (randomForm)
			delete randomForm;
	} catch (std::exception & e) 
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}