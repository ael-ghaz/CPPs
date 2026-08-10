/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 14:57:53 by eganas            #+#    #+#             */
/*   Updated: 2026/08/09 20:09:38 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	: AForm("RobotomyRequestForm", 72, 45), _target("Default")
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "RobotomyRequestForm : Default constructor called!" 
		<< "   ***" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target)
	: AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "RobotomyRequestForm : Parametrized constructor called!" 
		<< "   ***" << std::endl;
	}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &form)
	: AForm("RobotomyRequestForm", 72, 45), _target(form._target)
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "RobotomyRequestForm: Copy constructor called!"
		<< "   ***" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &form)
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "RobotomyRequestForm: Copy assignment operator called!"
		<< "   ***" << std::endl;
	if (this != &form)
	{
		AForm::operator=(form);
		this->_target = form._target;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "RobotomyRequestForm: Destructor called!"
		<< "   ***" << std::endl;
}

std::string RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

void RobotomyRequestForm::executeAction() const
{
	int random;

	random = std::rand() % 2;

	std::cout << "Beep bop beep bop bop" << std::endl;

	if (random == 1)
		std::cout << this->getTarget() << " has been robotomized successfuly." << std::endl;
	else
		std::cout << "Robotomy on " << this->getTarget() << " failed..." << std::endl;
}