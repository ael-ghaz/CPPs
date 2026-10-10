#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <exception>
#include <sstream>
#include <cstdlib>

class BitcoinExchange 
{
private:
	typedef std::map<std::string, double> BitcoinMap;
	BitcoinMap _datas;

public:
	BitcoinExchange();
	BitcoinExchange(BitcoinExchange const &other);
	BitcoinExchange &operator=(BitcoinExchange const &other);
	~BitcoinExchange();

	void parseDataBase();
	void execBtcInfo(char *fileName);
	bool isValidDate(std::string date) const;

	void displayResMultipliedValue(std::string date, double value);

	class CouldNotOpenFileException : public std::exception
	{
		virtual const char *what() const throw();
	};

	class InvalidColumnFormatException : public std::exception
	{
		virtual const char *what() const throw();
	};

	class InvalidPriceFormatException : public std::exception
	{
		virtual const char *what() const throw();
	};

	class InvalidDateFormatException : public std::exception
	{
		virtual const char *what() const throw();
	};
};

#endif