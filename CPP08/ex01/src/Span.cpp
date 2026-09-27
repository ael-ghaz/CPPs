#include "Span.hpp"

Span::Span() : _n(0) {}

Span::Span(Span const &other) : _n(other._n), _v(other._v) {}

Span::Span(unsigned int const n) : _n(n) {}

Span &Span::operator=(Span const &other)
{
	if (this != &other)
	{
		_n = other._n;
		_v = other._v;
	}
	return *this;
}

Span::~Span() {}


void Span::addNumber(int const nb)
{
	if (_v.size() >= _n)
		throw ContainerFullException();
	_v.push_back(nb);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (_v.size() + std::distance(begin, end) > _n)
		throw ContainerFullException();
	_v.insert(_v.end(), begin, end);
}

int Span::shortestSpan() const
{
	if (_v.size() <= 1)
		throw MissingDataException();

	std::vector<int> tmp = _v;
	std::sort(tmp.begin(), tmp.end());
	int min = tmp[1] - tmp[0];
	for (size_t i = 1; i < tmp.size(); ++i)
	{
		if (tmp[i] - tmp[i - 1] < min)
			min = tmp[i] - tmp[i - 1];
	}
	return (min);
}

int Span::longestSpan() const
{
	if (_v.size() <= 1)
		throw MissingDataException();

	std::vector<int> tmp = _v;
	std::sort(tmp.begin(), tmp.end());
	return (tmp[tmp.size() - 1] - tmp[0]);
}

const char *Span::ContainerFullException::what() const throw()
{
	return ("The container is full!");
}

const char *Span::MissingDataException::what() const throw()
{
	return ("Data is missing in container!");
}