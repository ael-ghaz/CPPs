/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 19:54:53 by eganas            #+#    #+#             */
/*   Updated: 2026/08/17 21:26:54 by eganas           ###   ########.fr       */
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
	int len = literal.length();
	ScalarConverter::LiteralType type = checkType(literal, len);

	switch (type)
	{
		case CHAR:
			convertChar(literal);
			break;
		case INT:
			convertInt(literal);
			break;
		case FLOAT:
			convertFloat(literal);
			break;
		case DOUBLE:
			convertDouble(literal);
			break;
		case IMPOSSIBLE:
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
			break;
		
		default:
			break;
	}
}

ScalarConverter::LiteralType ScalarConverter::checkType(std::string const literal, int len)
{
	if (std::isalpha(literal[0]) && len == 1)
		return CHAR;
	if (std::isdigit(literal[0]))
	{
		int i = 0;
		while (std::isdigit(literal[i]) && i < len)
			i++;
		if (i == len)
			return INT;
		else if (literal[i] == '.')
		{
			i++;
			while (std::isdigit(literal[i]) && i < len)
				i++;
			if (i == len)
				return DOUBLE;
			else if (literal[i] == 'f' && literal[i + 1] == '\0')
				return FLOAT;
		}
	}
	return IMPOSSIBLE;
}

void ScalarConverter::convertChar(std::string const literal)
{
	char c = literal[0];

	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << std::setprecision(1) << std::fixed << static_cast<double>(c) << std::endl;
}

void ScalarConverter::convertInt(std::string const literal)
{
	std::stringstream ss(literal);
	int i;

	ss >> i;
	if (ss.fail())
	{
		std::cerr << "Error: Failed convertion" << std::endl;
		return;
	}

	std::cout << "char: " << static_cast<char>(i) << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << std::setprecision(1) << std::fixed << static_cast<double>(i) << std::endl;

	ss.clear();
}

void ScalarConverter::convertFloat(std::string const literal)
{
	std::string str = literal;
	str.erase(str.length() - 1);
	std::stringstream ss(str);
	float f;

	ss >> f;
	if (ss.fail())
	{
		std::cerr << "Error: Failed convertion" << std::endl;
		return;
	}

	std::cout << "char: " << static_cast<char>(f) << std::endl;
	std::cout << "int: " << static_cast<int>(f) << std::endl;
	std::cout << "float: " << std::setprecision(1) << std::fixed << f << "f" << std::endl;
	std::cout << "double: " << std::setprecision(1) << std::fixed << static_cast<double>(f) << std::endl;

	ss.clear();
}

void ScalarConverter::convertDouble(std::string const literal)
{
	std::stringstream ss(literal);
	double d;

	ss >> d;
	if (ss.fail())
	{
		std::cerr << "Error: Failed convertion" << std::endl;
		return;
	}

	std::cout << "char: " << static_cast<char>(d) << std::endl;
	std::cout << "int: " << static_cast<int>(d) << std::endl;
	std::cout << "float: " << std::setprecision(literal.length() - 1) << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << std::setprecision(literal.length() - 1) << d << std::endl;

	ss.clear();
}