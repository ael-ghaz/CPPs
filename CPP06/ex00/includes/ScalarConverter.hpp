/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 19:54:56 by eganas            #+#    #+#             */
/*   Updated: 2026/08/11 21:02:21 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <iomanip>

class ScalarConverter {
	ScalarConverter();
	ScalarConverter(ScalarConverter const &scalar);
	ScalarConverter &operator=(ScalarConverter const &scalar);
	~ScalarConverter();

public:
	static void convert(std::string const literal);
};

#endif