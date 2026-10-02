#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	parseDataBase();
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &other)
: _datas(other._datas)
{}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &other)
{
	if (this != &other)
		_datas = other._datas;
	return *this;
}

BitcoinExchange::~BitcoinExchange() {}

const char *BitcoinExchange::CouldNotOpenFileException::what() const throw()
{
	return "Error: Could not open file.";
}

const char *BitcoinExchange::InvalidColumnFormatException::what() const throw()
{
	return "Error: Invalid column format.";
}

const char *BitcoinExchange::InvalidPriceFormatException::what() const throw()
{
	return "Error: Invalid price format.";
}

const char *BitcoinExchange::InvalidDateFormatException::what() const throw()
{
	return "Error: Invalid date format.";
}

bool BitcoinExchange::isValidDate(std::string date) const
{
	if (date.size() != 10 || date[4] != '-' || date[7] != '-')
		return false;
	
	for (int i = 0; i < 10; ++i)
	{
		if (i == 4 || i == 7)
			continue;
		if (!std::isdigit(date[i]))
			return false;	
	}

	if (date[5] == '0' && date[6] == '0')
		return false;
	if ((date[5] == '1' && date[6] > '2') || date[5] > '1')
		return false;

	if (date[8] == '0' && date[9] == '0')
		return false;
	if ((date[8] == '3' && date[9] > '1') || date[8] > '3')
		return false;

	return true;
}

double stringToDouble(std::string const &valueStr)
{
	double value;
	std::stringstream ssVal(valueStr);

	if (!(ssVal >> value))
	{
		std::cerr << "Error: bad value input => " << value << std::endl;
		return -1;
	}

	if (value < 0)
	{
		std::cerr << "Error: not a positive number."<< std::endl;
		return -1;
	}
	if (value > 1000)
	{
		std::cerr << "Error: too large a number." << std::endl;
		return -1;
	}

	return value;
}

void BitcoinExchange::displayResMultipliedValue(std::string date, double value)
{
	if (_datas.empty())
	{
		std::cerr << "Error: database is empty" << std::endl;
		return;
	}

	BitcoinMap::iterator it = _datas.lower_bound(date);

	if (it == _datas.end() || it->first != date)
	{
		if (it == _datas.begin())
		{
			std::cout << "Error: bad input => " << date << std::endl;
			return;
		}
		--it;
	}
	std::cout << date << " => " << value << " = " << value * it->second << std::endl;
}

void BitcoinExchange::parseDataBase()
{
	std::ifstream ifs("data.csv");
	if (!ifs.is_open())
		throw CouldNotOpenFileException();
	
	std::string line;
	std::getline(ifs, line);
	if (line != "date,exchange_rate")
		throw InvalidColumnFormatException();

	while (std::getline(ifs, line))
	{
		std::string date;
		std::string price;
		std::stringstream ss(line);

		std::getline(ss, date, ',');
		std::getline(ss, price);

		std::stringstream ssPrice(price);
		double exchange_rate;
		if (!(ssPrice >> exchange_rate))
			throw InvalidPriceFormatException();
		_datas[date] = exchange_rate;
	}
	ifs.close();
}

void BitcoinExchange::execBtcInfo(char *fileName)
{
	std::ifstream ifs(fileName);
	if (!ifs.is_open())
		throw CouldNotOpenFileException();
	
	std::string line;
	std::getline(ifs, line);
	if (!line.empty() && line[line.length() - 1] == '\r')
		line.erase(line.length() - 1);
	if (line != "date | value")
		throw InvalidColumnFormatException();

	while (std::getline(ifs, line))
	{
		std::string date;
		std::string valueStr;
		std::stringstream ss(line);

		std::getline(ss, date, '|');
		std::getline(ss, valueStr);

		if (!date.empty())
			date.erase(date.length() - 1);
		if (!isValidDate(date))
		{
			std::cerr << "Error: bad input => " << date << std::endl;
			continue;
		}

		if (!valueStr.empty())
			valueStr.erase(0, 1);
		double value = stringToDouble(valueStr);
		if (value != -1)
			displayResMultipliedValue(date, value);
	}
}