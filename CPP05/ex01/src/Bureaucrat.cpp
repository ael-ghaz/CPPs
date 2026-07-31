/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 18:54:27 by eganas            #+#    #+#             */
/*   Updated: 2026/07/31 20:58:34 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Unknown"), _grade(150)
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "Bureacrat : Default constructor called!" 
		<< "   ***" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade)
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "Bureacrat : Parametrized constructor called!" 
		<< "   ***" << std::endl;
	if (grade < HIGHEST_GRADE)
		throw GradeTooHighException();
	if (grade > LOWEST_GRADE)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &bureaucrat) : _name(bureaucrat._name), _grade(bureaucrat._grade)
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "Bureaucrat: Copy constructor called!"
		<< "   ***" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &bureaucrat)
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "Bureaucrat: Copy assignment operator called!"
		<< "   ***" << std::endl;
	if (this != &bureaucrat)
	{
		this->_grade = bureaucrat.getGrade();
	}
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "Bureaucrat: Destructor called!"
		<< "   ***" << std::endl;
}

std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int			Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void		Bureaucrat::incrementGrade()
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "Bureacrat : Increment Grade Function called!" 
		<< "   ***" << std::endl;
	if (this->_grade == HIGHEST_GRADE)
		throw GradeTooHighException();
	this->_grade--;
}

void		Bureaucrat::decrementGrade()
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "Bureacrat : Decrement Grade Function called!" 
		<< "   ***" << std::endl;
	if (this->_grade == LOWEST_GRADE)
		throw GradeTooLowException();
	this->_grade++;
}

void		Bureaucrat::signForm(Form &form)
{
	try {
		if (!form.getBoolSigned()) {
			form.beSigned(*this);
			std::cout << this->_name << " signed \'" << form.getName() << "\'" << std::endl;
		} else {
			std::cout << "\'" << form.getName() << "\' is already signed "  << std::endl;
		}
	} catch (std::exception & e) {
		std::cout << this->_name << " couldn't sign \'"
			<< form.getName() << "\' because \'" << e.what() << "\'"
			<< std::endl;
		return;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade is too High ! Must be lower than grade 1.");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade is too Low ! Must be higher than grade 150.");
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return out;
}
