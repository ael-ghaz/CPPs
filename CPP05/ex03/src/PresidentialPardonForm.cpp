/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 14:51:37 by eganas            #+#    #+#             */
/*   Updated: 2026/08/09 19:27:30 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: AForm("PresidentialPardonForm", 25, 5), _target("Default")
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "PresidentialPardonForm : Default constructor called!" 
		<< "   ***" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target)
	: AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "PresidentialPardonForm : Parametrized constructor called!" 
		<< "   ***" << std::endl;
	}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &form)
	: AForm("PresidentialPardonForm", 25, 5), _target(form._target)
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "PresidentialPardonForm: Copy constructor called!"
		<< "   ***" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &form)
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "PresidentialPardonForm: Copy assignment operator called!"
		<< "   ***" << std::endl;
	if (this != &form)
	{
		AForm::operator=(form);
		this->_target = form._target;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "PresidentialPardonForm: Destructor called!"
		<< "   ***" << std::endl;
}

std::string PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

void PresidentialPardonForm::executeAction() const
{
	std::cout << this->getTarget() << " has been pardoned by  Zaphod Beeblebrox" << std::endl;
}