#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <deque>
#include <cctype>
#include <sstream>
#include <limits>
#include <utility>
#include <algorithm>
#include <ctime>

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
	
	void runFirstCtn();
	void runSecondCtn();

	std::vector<int> getV() const;
	std::deque<int> getD() const;

	template <typename T>
	T fordJohnsonSort(T container);
};

template <typename T>
T PmergeMe::fordJohnsonSort(T container)
{
	if (container.size() <= 1)
		return container;
	
	std::vector<std::pair<int, int> > pairs;
	bool hasStraggler = (container.size() % 2 != 0);
	int straggler = 0;

	if (hasStraggler)
	{
		straggler = container.back();
		container.pop_back();
	}

	for (size_t i = 0; i < container.size(); i += 2)
	{
		int a = container[i];
		int b = container[i + 1];

		if (a > b)
			pairs.push_back(std::make_pair(b, a));
		else
			pairs.push_back(std::make_pair(a, b));
	}

	T winners;

	for (size_t i = 0; i < pairs.size(); ++i)
		winners.push_back(pairs[i].second);

	winners = fordJohnsonSort(winners);

	for (size_t i = 0; i < pairs.size(); ++i)
	{
		int valSmall = pairs[i].first;

		typename T::iterator itBig = find(winners.begin(), winners.end(), pairs[i].second);
		typename T::iterator itInsert = std::lower_bound(winners.begin(), itBig, valSmall);

		winners.insert(itInsert, valSmall);
	}

	if (hasStraggler)
	{
		typename T::iterator itInsert = std::lower_bound(winners.begin(), winners.end(), straggler);
		winners.insert(itInsert, straggler);
	}
	
	return winners;
}

#endif