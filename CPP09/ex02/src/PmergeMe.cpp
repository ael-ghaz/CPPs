#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(PmergeMe const &other) : _v(other._v), _d(other._d) {}

PmergeMe &PmergeMe::operator=(PmergeMe const &other)
{
	if (this != &other)
	{
		_v = other._v;
		_d = other._d;
	}
	return *this;
}

PmergeMe::~PmergeMe() {}

bool PmergeMe::parseInput(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cerr << "Error: need more parameters." << std::endl;
		return false;
	}

	for (int i = 1; i < argc; ++i)
	{
		std::string arg = argv[i];

		if (arg.empty())
		{
			std::cerr << "Error" << std::endl;
			return false;
		}

		for (size_t j = 0; j < arg.length(); ++j)
		{
			if (!std::isdigit(arg[j]))
			{
				std::cerr << "Error" << std::endl;
				return false;
			}
		}

		std::stringstream ss(arg);
		long nb;

		if (!(ss >> nb))
		{
			std::cerr << "Error" << std::endl;
			return false;
		}
		
		if (nb < 0 || nb > std::numeric_limits<int>::max())
		{
			std::cerr << "Error" << std::endl;
			return false;
		}
		
		_v.push_back(static_cast<int>(nb));
		_d.push_back(static_cast<int>(nb));
	}
	return true;
}

void PmergeMe::runFirstCtn()
{
	_v = fordJohnsonSort(_v);
}

void PmergeMe::runSecondCtn()
{
	_d = fordJohnsonSort(_d);
}

std::vector<int> PmergeMe::getV() const
{
	return _v;
}

std::deque<int> PmergeMe::getD() const
{
	return _d;
}