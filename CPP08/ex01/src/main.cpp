#include "Span.hpp"
#include <cstdlib>
#include <ctime>

#define SIZE_MAX_TEST 100000

int main()
{
	std::cout << "__________TEST BASIC__________" << std::endl;
	std::srand(time(NULL));
	try {
		Span span1(3);
	
		span1.addNumber(rand() % 10);
		span1.addNumber(rand() % 10);
		span1.addNumber(rand() % 10);
		
		std::cout << "Shortest Span: " << span1.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << span1.longestSpan() << std::endl;
		
		span1.addNumber(10);

	} 
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "__________TEST MANY NB__________" << std::endl;
	std::srand(time(NULL));

	try {
		Span span2(SIZE_MAX_TEST);

		for (int i = 0; i < SIZE_MAX_TEST; ++i)
			span2.addNumber(rand() % SIZE_MAX_TEST);
	
		std::cout << "Shortest Span: " << span2.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << span2.longestSpan() << std::endl;
	} 
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "__________TEST INSERTION__________" << std::endl;
	std::srand(time(NULL));
	try {
		Span span3(SIZE_MAX_TEST);
		std::vector<int> v;

		for (int i = 0; i < SIZE_MAX_TEST; ++i)
			v.push_back(rand() % SIZE_MAX_TEST);
		
		span3.addNumber(v.begin(), v.end());
		std::cout << "Shortest Span: " << span3.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << span3.longestSpan() << std::endl;

	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}