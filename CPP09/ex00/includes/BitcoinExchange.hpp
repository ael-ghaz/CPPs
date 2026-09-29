#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>

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

	BitcoinMap getDatas() const;
}

#endif