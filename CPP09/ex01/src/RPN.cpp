#include "RPN.hpp"

RPN::RPN()
{

}

RPN::RPN(RPN const &other) : _store(other._store)
{

}

RPN &RPN::operator=(RPN const &other)
{
	if (this != &other)
		_store = other._store;
	return *this;
}

RPN::~RPN() {}

bool isOperator(char c)
{
	if (c != '+' && c != '-' && c != '*' && c != '/')
		return false;
	return true;
}

void RPN::execRPN(std::string input)
{
	while (!_store.empty())
		_store.pop();
	
	for (size_t i = 0; i < input.length(); ++i)
	{
		if (input[i] == ' ')
			continue;

		if (std::isdigit(input[i]))
		{
			double inputDouble = input[i] - '0';
			_store.push(inputDouble);
		}
		else if (isOperator(input[i]))
		{
			if (_store.size() < 2)
			{
				std::cerr << "Error" << std::endl;
				return;
			}
			double operandR = _store.top();
			_store.pop();
			double operandL = _store.top();
			_store.pop();

			switch (input[i])
			{
				case '+':
					_store.push(operandL + operandR);
					break;
				case '-':
					_store.push(operandL - operandR);
					break;
				case '*':
					_store.push(operandL * operandR);
					break;
				case '/':
					if (operandR == 0)
					{
						std::cerr << "Error" << std::endl;
						return;
					}
					_store.push(operandL / operandR);
					break;
				default:
					break;
			}
		}
		else
		{
			std::cerr << "Error" << std::endl;
			return;
		}
	}
	if (_store.size() != 1)
	{
		std::cerr << "Error" << std::endl;
		return;
	}

	std::cout << _store.top() << std::endl;
}