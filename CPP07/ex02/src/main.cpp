#include "Array.hpp"

int main()
{

	std::cout << "__________TEST ERROR__________" << std::endl << std::endl;
	try
	{
		Array<int> errInt(10);

		std::cout << errInt[11] << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "__________TEST DEFAULT__________" << std::endl << std::endl;

	try
	{
		Array<int> defInt;

		std::cout << "Default size: " << defInt.size() << std::endl;
		std::cout << "First data: " << defInt[0] << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "__________TEST COPY__________" << std::endl << std::endl;

	try
	{
		Array<double> defOriginal(5);

		for (unsigned int i = 0; i < defOriginal.size() ; ++i)
			defOriginal[i] = i;

		Array<double> defCopy(defOriginal);

		for (unsigned int i = 0; i < defCopy.size() ; ++i)
			std::cout << "Copy [" << defCopy[i] << ":" 
			<< defOriginal[i] << "] Original" << std::endl;

		std::cout << std::endl << "Changing value of the copy :" << std::endl;
		for (unsigned int i = 0; i < defCopy.size() ; ++i)
			defCopy[i] += 0.5;

		for (unsigned int i = 0; i < defCopy.size() ; ++i)
			std::cout << "Copy [" << defCopy[i] << ":" 
			<< defOriginal[i] << "] Original" << std::endl;

	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "__________TEST ASSIGN__________" << std::endl << std::endl;

	try
	{
		Array<int> defOrigin(5);
		Array<int> defAssign;

		for (unsigned int i = 0; i < defOrigin.size() ; ++i)
			defOrigin[i] = i;

		defAssign = defOrigin;

		for (unsigned int i = 0; i < defAssign.size() ; ++i)
			std::cout << "Assign [" << defAssign[i] << ":" 
			<< defOrigin[i] << "] Origin" << std::endl;

	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	
	return 0;
}