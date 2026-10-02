#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: syntax is ./btc <file>" << std::endl;
		return 1;
	}

	try {
		BitcoinExchange be;
	
		be.parseDataBase();
		be.execBtcInfo(argv[1]);
	} 
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}