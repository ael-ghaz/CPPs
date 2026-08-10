/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 11:05:41 by eganas            #+#    #+#             */
/*   Updated: 2026/08/08 17:07:33 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm()
	: _name("Unknown"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "AForm : Default constructor called!" 
		<< "   ***" << std::endl;
}

AForm::AForm(std::string const name, int const gradeToSign, int const gradeToExecute)
	: _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "AForm : Parametrized constructor called!" 
		<< "   ***" << std::endl;
	if (gradeToSign < HIGHEST_GRADE || gradeToExecute < HIGHEST_GRADE)
		throw GradeTooHighException();
	if (gradeToSign > LOWEST_GRADE || gradeToExecute > LOWEST_GRADE)
		throw GradeTooLowException();
	}

AForm::AForm(AForm const &form)
	: _name(form._name), _isSigned(form._isSigned), _gradeToSign(form._gradeToSign), _gradeToExecute(form._gradeToExecute)
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "Form: Copy constructor called!"
		<< "   ***" << std::endl;
}

AForm &AForm::operator=(AForm const &form)
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "AForm: Copy assignment operator called!"
		<< "   ***" << std::endl;
	if (this != &form)
	{
		this->_isSigned = form.getBoolSigned();
	}
	return (*this);
}

AForm::~AForm()
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "AForm: Destructor called!"
		<< "   ***" << std::endl;
}

std::string AForm::getName() const
{
	return (this->_name);
}

bool AForm::getBoolSigned() const
{
	return (this->_isSigned);
}

int AForm::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int AForm::getGradeToExecute() const
{
	return (this->_gradeToExecute);
}

void AForm::beSigned(Bureaucrat const &bureaucrat)
{
	if (this->_gradeToSign >= bureaucrat.getGrade())
		this->_isSigned = true;
	else
		throw GradeTooLowException();
}

void AForm::execute(Bureaucrat const &executor) const
{
	if (!this->getBoolSigned())
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	this->executeAction();
}

const char* AForm::GradeTooHighException::what() const throw() {
	return ("Grade is too High !");
}

const char* AForm::GradeTooLowException::what() const throw() {
	return ("Grade is too Low !");
}

const char* AForm::FormNotSignedException::what() const throw() {
	return ("Form not signed!");
}

std::ostream &operator<<(std::ostream &out, AForm const &form)
{
	out << std::endl << "Info from \'" << form.getName() << "\':" << std::endl
		<< "  form sign status: " << form.getBoolSigned() << std::endl
		<< "  form grade to sign: " << form.getGradeToSign() << std::endl
		<< "  form grade to execute: " << form.getGradeToExecute() << std::endl;
	return out;
}