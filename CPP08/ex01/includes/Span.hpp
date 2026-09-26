#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>

class Span
{
private:
	int *tab;
	unsigned int _n

public:
	Span() = delete;
	Span(Span const &other) = delete;

	Span(unsigned int const n);
	Span &operator=(Span const &other);
	~Span();

	void addNumber(int const nb);

	int shortestSpan() const;
	int longestSpan() const;

	class StoreFullException : std::exception
	{
		public:
			virtual const char *what() const throw();
	};

	class MissingDataException : std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};

#endif