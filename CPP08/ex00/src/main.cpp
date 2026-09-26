#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>

int main()
{
	std::cout << std::endl << "__________TEST VECTOR CONTAINER__________" << std::endl;
	try
	{
		std::vector<int> v;

		for (int i = 0; i < 5 ; ++i)
		{
			v.push_back(i);
			std::cout << "v[" << i << "] = " << v[i] << std::endl;
		}

		std::cout << "Is 4 in container?" << std::endl << *easyfind(v, 4) << std::endl;
		std::cout << "Is 6 in container?" << std::endl << *easyfind(v, 6) << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "__________TEST LIST CONTAINER__________" << std::endl;

	try
	{
		std::list<int> l;

		for (int i = 0; i < 10 ; ++i)
		{
			l.push_back(i + 1);
			std::cout << "l[" << i << "] = " << l.back() << std::endl;
		}

		std::cout << "Is 10 in container?" << std::endl << *easyfind(l, 10) << std::endl;
		std::cout << "Is 0 in container?" << std::endl << *easyfind(l, 0) << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "__________TEST DEQUE CONTAINER__________" << std::endl;

	try
	{
		std::deque<int> d;

		for (int i = 0; i < 50 ; ++i)
		{
			d.push_back(i * 2);
			std::cout << "d[" << i << "] = " << d[i] << std::endl;
		}

		std::cout << "Is 50 in container?" << std::endl << *easyfind(d, 50) << std::endl;
		std::cout << "Is 13 in container?" << std::endl << *easyfind(d, 13) << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}