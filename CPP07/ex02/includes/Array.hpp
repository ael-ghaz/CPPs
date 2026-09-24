#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
private:
	T *_datas;
	unsigned int _size;

public:
	Array();
	Array(unsigned int n);
	Array(Array const &other);
	Array &operator=(Array const &other);
	~Array();

	T operator[](unsigned int n) const;
	T &operator[](unsigned int n);

	unsigned int size() const;

	class OutOfBounds : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};

#include "Array.tpp"

#endif