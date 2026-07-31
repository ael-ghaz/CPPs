/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 18:54:19 by eganas            #+#    #+#             */
/*   Updated: 2026/07/31 21:52:40 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {

	std::cout << std::endl << "__________BASIC TESTS__________" << std::endl << std::endl;

	try 
	{
		Bureaucrat marc("Marc", 100);
		Bureaucrat paul("Paul", 50);
		Bureaucrat jean("Jean", 10);
		
		Form f1("Demolition permit", 55, 20);

		std::cout << f1 << std::endl;

		marc.signForm(f1);
		paul.signForm(f1);
		jean.signForm(f1);
		
		std::cout << f1 << std::endl;
		
	} catch (std::exception & e) 
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "__________GRADE EXCEPTIONS__________" << std::endl << std::endl;

	try 
	{	
		Form f2("Bank Check", 25, 151);	
	} catch (std::exception & e) 
	{
		std::cerr << e.what() << std::endl;
	}
	try 
	{	
		Form f3("Bank Check", 25, 0);
	} catch (std::exception & e) 
	{
		std::cerr << e.what() << std::endl;
	}
	try 
	{	
		Form f4("Construction Permit", 0, 25);
	} catch (std::exception & e) 
	{
		std::cerr << e.what() << std::endl;
	}
	try 
	{	
		Form f5("Construction Permit", 151, 25);
	} catch (std::exception & e) 
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}