#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	PmergeMe sorter;

	if (!sorter.parseInput(argc, argv))
		return 1;

	std::cout << "Before:";
	for (size_t i = 0; i < sorter.getV().size(); ++i)
	{
		std::cout << " " << sorter.getV()[i];
	}
	std::cout << std::endl;

	std::clock_t start_f = std::clock();
	sorter.runFirstCtn();

	double time_f = 1000000.0 * (std::clock() - start_f) / CLOCKS_PER_SEC;

	std::clock_t start_s = std::clock();
	sorter.runSecondCtn();
	std::clock_t end_s = std::clock();

	double time_s = static_cast<double>(end_s - start_s) / CLOCKS_PER_SEC * 1000000.0;

	std::cout << "After:";
	for (size_t i = 0; i < sorter.getV().size(); ++i)
	{
		std::cout << " " << sorter.getV()[i];
	}
	std::cout << std::endl;

	std::cout << std::fixed << std::setprecision(5);
	std::cout << "Time to process a range of " << argc - 1 << " elements with std::vector : "<< time_f << " us" << std::endl;
    std::cout << "Time to process a range of " << argc - 1 << " elements with std::deque : " << time_s << " us" << std::endl;
	return 0;
}