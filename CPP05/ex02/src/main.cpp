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

int main() {

	srand(time(NULL));
	std::cout << std::endl << "__________BASIC TESTS__________" << std::endl << std::endl;

	try 
	{
		Bureaucrat marc("Marc", 100);
		Bureaucrat vega("Vegapunk", 45);
		Bureaucrat eli("Elizabeth Swann", 5);
		
		ShrubberyCreationForm f1("Montgeon");
		RobotomyRequestForm f2("Kuma");
		PresidentialPardonForm f3("Jack Sparrow");

		std::cout << f1 << std::endl;
		std::cout << f2 << std::endl;
		std::cout << f3 << std::endl;
		
		
		marc.signForm(f1);
		vega.signForm(f2);
		eli.signForm(f3);
		
		std::cout << f1 << std::endl;
		std::cout << f2 << std::endl;
		std::cout << f3 << std::endl;
		
		marc.executeForm(f1);
		vega.executeForm(f2);
		eli.executeForm(f3);
		
	} catch (std::exception & e) 
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "__________GRADE EXCEPTIONS__________" << std::endl << std::endl;

	try {
		Bureaucrat michel("Michel", 100);
		ShrubberyCreationForm f4("Rouelle");

		michel.executeForm(f4);
	} catch (std::exception & e) 
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat jean("Jean", 10);
		PresidentialPardonForm f5("Jacky");

		jean.signForm(f5);
		jean.executeForm(f5);
	} catch (std::exception & e) 
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat franky("Franky", 45);
		RobotomyRequestForm f6("Suuuper Frrranky");

		franky.signForm(f6);
		franky.executeForm(f6);
		franky.executeForm(f6);
		franky.executeForm(f6);
		franky.executeForm(f6);
	} catch (std::exception & e) 
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}