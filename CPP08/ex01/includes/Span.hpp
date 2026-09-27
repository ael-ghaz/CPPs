#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>

class Span
{
private:
	unsigned int _n;
	std::vector<int> _v;

	Span();
	Span(Span const &other);

public:

	Span(unsigned int const n);
	Span &operator=(Span const &other);
	~Span();

	void addNumber(int const nb);
	void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

	int shortestSpan() const;
	int longestSpan() const;

	class ContainerFullException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

	class MissingDataException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};

#endif