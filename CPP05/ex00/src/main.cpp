/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 18:54:19 by eganas            #+#    #+#             */
/*   Updated: 2026/07/25 12:48:19 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {

	std::cout << std::endl << "__________DEFAULT TEST__________" << std::endl << std::endl;

	try 
	{
		Bureaucrat defaultBC;
		Bureaucrat marc("Marc", 95);
		Bureaucrat marcus(marc);
		
		std::cout << defaultBC << std::endl;
		std::cout << marc << std::endl;
		std::cout << marcus << std::endl;
		
	} catch (std::exception & e) 
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "__________TEST SUCCES__________" << std::endl << std::endl;

	try 
	{
		Bureaucrat steven("Steven", 50);
		
		std::cout << steven << std::endl;
		steven.decrementGrade();
		std::cout << steven << std::endl;
		steven.incrementGrade();
		std::cout << steven << std::endl;
		
	} catch (std::exception & e) 
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "__________TEST TOO LOW__________" << std::endl << std::endl;

	try 
	{
		Bureaucrat caroline("Caroline", 150);
		
		std::cout << caroline << std::endl;
		caroline.decrementGrade();
		std::cout << caroline << std::endl;
		caroline.incrementGrade();
		std::cout << caroline << std::endl;

		
	} catch (std::exception & e) 
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "__________TEST TOO HIGH__________" << std::endl << std::endl;

	try 
	{
		Bureaucrat michelle("Michelle", 1);
		
		std::cout << michelle << std::endl;
		michelle.incrementGrade();
		std::cout << michelle << std::endl;
		michelle.decrementGrade();
		std::cout << michelle << std::endl;

		
	} catch (std::exception & e) 
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "__________TEST BEGIN TOO HIGH__________" << std::endl << std::endl;

	try 
	{
		Bureaucrat jack("Jack", 0);
		
		std::cout << jack << std::endl;
		
	} catch (std::exception & e) 
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "__________TEST BEGIN TOO LOW__________" << std::endl << std::endl;

	try 
	{
		Bureaucrat bob("Bob", 151);
		
		std::cout << bob << std::endl;
		
	} catch (std::exception & e) 
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}