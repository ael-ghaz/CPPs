include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Unknown", _grade(150))
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "Bureacrat : Default constructor called!" 
		<< "   ***" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &bureaucrat)
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "Bureaucrat: Copy constructor called!"
		<< "   ***" << std::endl;
	*this = bureaucrat;
}

Bureaucrat::Bureaucrat &operator=(Bureaucrat const &bureaucrat)
{
	std::cout << "***   " << std::left << std::setw(40)
		<< "Bureaucrat: Copy assignment operator called!"
		<< "   ***" << std::endl;
	if (this != &bureaucrat)
	{
		this->_name = bureaucrat->getName();
		this->_grade = bureaucrat->getGrade();
	}
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
	try {
		this->_grade++;
	} catch (std::exception & e) {

	}
}

void		Bureaucrat::decrementGrade()
{
	try {
		this->_grade--;
	} catch (std::exception & e) {

	}
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
	out << "<" + bureaucrat.getName() << ">, bureaucrat grade <" << bureaucrat.getGrade() + ">." << std::endl;
	return out;
}
