#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat {
	std::string	_name;
	int			_grade;

public:
	Bureaucrat();
	Bureaucrat(Bureaucrat const &bureaucrat);
	Bureaucrat &operator=(Bureaucrat const &bureaucrat);
	~Bureaucrat();

	std::string	getName() const;
	int			getGrade() const
	void		incrementGrade();
	void		decrementGrade();
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif