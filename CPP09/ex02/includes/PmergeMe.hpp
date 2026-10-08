#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <cctype>
#include <sstream>
#include <limits>

class PmergeMe
{
private:
	std::vector<int> _v;
	std::deque<int> _d;

public:
	PmergeMe();
	PmergeMe(PmergeMe const &other);
	PmergeMe &operator=(PmergeMe const &other);
	~PmergeMe();

	bool parseInput(int argc, char **argv);

	template <typename T>
	T fordJohnsonSort(T container);
};

template <typename T>
T PmergeMe::fordJohnsonSort(T container)
{
	

	return container;
}

#endif