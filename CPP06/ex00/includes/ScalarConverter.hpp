/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 19:54:56 by eganas            #+#    #+#             */
/*   Updated: 2026/08/17 21:01:26 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>
#include <iomanip>

class ScalarConverter {
	ScalarConverter();
	ScalarConverter(ScalarConverter const &scalar);
	ScalarConverter &operator=(ScalarConverter const &scalar);
	~ScalarConverter();

public:
	enum LiteralType{
		CHAR,
		INT,
		FLOAT,
		DOUBLE,
		IMPOSSIBLE
	};

	static void convert(std::string const literal);

	static LiteralType checkType(std::string const literal, int len);
	
	static void convertChar(std::string const literal);
	static void convertInt(std::string const literal);
	static void convertFloat(std::string const literal);
	static void convertDouble(std::string const literal);
};

#endif