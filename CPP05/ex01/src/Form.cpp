/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 11:05:41 by eganas            #+#    #+#             */
/*   Updated: 2026/07/31 21:28:14 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
	: _name("Unknown"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "Form : Default constructor called!" 
		<< "   ***" << std::endl;
}

Form::Form(std::string const name, int const gradeToSign, int const gradeToExecute)
	: _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "Form : Parametrized constructor called!" 
		<< "   ***" << std::endl;
	if (gradeToSign < HIGHEST_GRADE || gradeToExecute < HIGHEST_GRADE)
		throw GradeTooHighException();
	if (gradeToSign > LOWEST_GRADE || gradeToExecute > LOWEST_GRADE)
		throw GradeTooLowException();
	}

Form::Form(Form const &form)
	: _name(form._name), _isSigned(form._isSigned), _gradeToSign(form._gradeToSign), _gradeToExecute(form._gradeToExecute)
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "Form: Copy constructor called!"
		<< "   ***" << std::endl;
}

Form &Form::operator=(Form const &form)
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "Form: Copy assignment operator called!"
		<< "   ***" << std::endl;
	if (this != &form)
	{
		this->_isSigned = form.getBoolSigned();
	}
	return (*this);
}

Form::~Form()
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "Form: Destructor called!"
		<< "   ***" << std::endl;
}

std::string Form::getName() const
{
	return (this->_name);
}

bool Form::getBoolSigned() const
{
	return (this->_isSigned);
}

int Form::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int Form::getGradeToExecute() const
{
	return (this->_gradeToExecute);
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (this->_gradeToSign >= bureaucrat.getGrade())
		this->_isSigned = true;
	else
		throw GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw() {
	return ("Grade is too High !");
}

const char* Form::GradeTooLowException::what() const throw() {
	return ("Grade is too Low !");
}

std::ostream &operator<<(std::ostream &out, Form const &form)
{
	out << std::endl << "Info from \'" << form.getName() << "\':" << std::endl
		<< "  form sign status: " << form.getBoolSigned() << std::endl
		<< "  form grade to sign: " << form.getGradeToSign() << std::endl
		<< "  form grade to execute: " << form.getGradeToExecute() << std::endl;
	return out;
}