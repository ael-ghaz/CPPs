/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 19:39:11 by eganas            #+#    #+#             */
/*   Updated: 2026/08/08 17:20:55 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: AForm("ShrubberyCreationForm", 145, 137), _target("Default")
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "ShrubberyCreationForm : Default constructor called!" 
		<< "   ***" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
	: AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "ShrubberyCreationForm : Parametrized constructor called!" 
		<< "   ***" << std::endl;
	}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &form)
	: AForm("ShrubberyCreationForm", 145, 137), _target(form._target)
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "ShrubberyCreationForm: Copy constructor called!"
		<< "   ***" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &form)
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "ShrubberyCreationForm: Copy assignment operator called!"
		<< "   ***" << std::endl;
	if (this != &form)
	{
		AForm::operator=(form);
		this->_target = form._target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "ShrubberyCreationForm: Destructor called!"
		<< "   ***" << std::endl;
}

std::string ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

void ShrubberyCreationForm::executeAction() const
{
	std::ofstream outfile((this->getTarget() + "_shrubbery").c_str());
	if (!outfile.is_open()) {
		throw std::runtime_error("Could not create shrubbery file");
	}
	for (int i = 0; i < 5; i++)
	{
		outfile <<
		"         v\n"
        "        >X<\n"
        "         A\n"
        "        d$b\n"
        "      .d\\$$b.\n"
        "    .d$i$$\\$$b.\n"
        "       d$$@b\n"
        "      d\\$$$ib\n"
        "    .d$$$\\$$$b\n"
        "  .d$$@$$$$\\$$ib.\n"
        "       d$$i$$b\n"
        "      d\\$$$$@$b\n"
        "  .d$@$$\\$$$$$@b.\n"
        ".d$$$$i$$$\\$$$$$$b.\n"
        "         ###\n"
        "         ###\n"
        "         ###\n\n";
	}
	outfile.close();
}