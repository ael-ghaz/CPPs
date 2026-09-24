#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename B>
void printVal(B e)
{
	std::cout << e << " ";
}

template <typename B>
void IncrNonConstRef(B &e)
{
	e += 1;
}

template <typename B>
void printConstRef(B const &e)
{
	std::cout << e << " ";
}

template <typename T, typename F>
void iter(T *array, size_t const len, F fct)
{
	if (!array)
		return ;
	for (size_t i = 0 ; i < len; ++i)
		fct(array[i]);
}

#endif