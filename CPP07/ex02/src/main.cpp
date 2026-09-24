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
		Array<double> arrOriginal(5);

		for (unsigned int i = 0; i < arrOriginal.size() ; ++i)
			arrOriginal[i] = i;

		Array<double> arrCopy(arrOriginal);

		for (unsigned int i = 0; i < arrCopy.size() ; ++i)
			std::cout << "Copy [" << arrCopy[i] << ":" 
			<< arrOriginal[i] << "] Original" << std::endl;

		std::cout << std::endl << "Changing value of the copy :" << std::endl;
		for (unsigned int i = 0; i < arrCopy.size() ; ++i)
			arrCopy[i] += 0.5;

		for (unsigned int i = 0; i < arrCopy.size() ; ++i)
			std::cout << "Copy [" << arrCopy[i] << ":" 
			<< arrOriginal[i] << "] Original" << std::endl;

	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "__________TEST ASSIGN__________" << std::endl << std::endl;

	try
	{
		Array<int> arrOrigin(5);
		Array<int> arrAssign;

		for (unsigned int i = 0; i < arrOrigin.size() ; ++i)
			arrOrigin[i] = i;

		arrAssign = arrOrigin;

		for (unsigned int i = 0; i < arrAssign.size() ; ++i)
			std::cout << "Assign [" << arrAssign[i] << ":" 
			<< arrOrigin[i] << "] Origin" << std::endl;

	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "__________TEST CONST__________" << std::endl << std::endl;

	try
	{
		Array<int> arrTest(1);

		arrTest[0] = 42;

		Array<int> const arrConst(arrTest);
		std::cout << "Const [" << arrConst[0] << ":";
		// arrConst[0] = 5;
		std::cout << arrConst[0] << "]" << std::endl;

		std::cout << std::endl << "SIZE:" << std::endl;
		std::cout << "Test [" << arrTest.size() << ":" 
			<< arrConst.size() << "] Const" << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	
	return 0;
}