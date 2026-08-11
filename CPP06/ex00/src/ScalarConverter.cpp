/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 19:54:53 by eganas            #+#    #+#             */
/*   Updated: 2026/08/11 21:03:26 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "ScalarConverter : Default constructor called!" 
		<< "   ***" << std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter const &literal)
{
	std::cout << "***   " << std::left << std::setw(40)
	<< "ScalarConverter: Copy constructor called!"
	<< "   ***" << std::endl;
	*this = literal;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &literal)
{
	(void)literal;
	std::cout << "***   " << std::left << std::setw(40)
	<< "ScalarConverter: Copy assignment operator called!"
	<< "   ***" << std::endl;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "***   " << std::left << std::setw(40)
	<< "ScalarConverter: Destructor called!"
	<< "   ***" << std::endl;
}

void ScalarConverter::convert(std::string literal)
{
	std::cout << "char: " << literal[0] << std::endl;
	std::cout << "int: " << static_cast<int>(literal[0]) << std::endl;
	std::cout << "float: " << static_cast<float>(literal[0]) << std::endl;
	std::cout << "double: " << static_cast<double>(literal[0]) << std::endl;
}