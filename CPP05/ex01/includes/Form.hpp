/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 18:26:47 by eganas            #+#    #+#             */
/*   Updated: 2026/07/31 21:02:59 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <stdexcept>
#include <iomanip>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	std::string const _name;
	bool _isSigned;
	int const _gradeToSign;
	int const _gradeToExecute;

public:
	Form();
	Form(std::string const name, int const gradeToSign, int const gradeToExecute);
	Form(Form const &form);
	Form &operator=(Form const &form);
	~Form();

	std::string getName() const;
	bool getBoolSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;
	
	void beSigned(Bureaucrat &bureaucrat);

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, Form const &form);

#endif