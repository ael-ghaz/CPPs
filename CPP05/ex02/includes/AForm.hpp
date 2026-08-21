/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 18:26:47 by eganas            #+#    #+#             */
/*   Updated: 2026/08/09 19:28:58 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <stdexcept>
#include <iomanip>
#include <fstream>
#include <stdlib.h>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	std::string const _name;
	bool _isSigned;
	int const _gradeToSign;
	int const _gradeToExecute;

public:
	AForm();
	AForm(std::string const name, int const gradeToSign, int const gradeToExecute);
	AForm(AForm const &form);
	AForm &operator=(AForm const &form);
	virtual ~AForm();

	std::string getName() const;
	bool getBoolSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;
	
	void beSigned(Bureaucrat const &bureaucrat);

	void execute(Bureaucrat const &executor) const;
	virtual void executeAction() const = 0;

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
	
	class FormNotSignedException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, AForm const &form);

#endif