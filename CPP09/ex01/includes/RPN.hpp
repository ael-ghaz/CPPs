#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <sstream>

class RPN
{
private:
	std::stack<double> _store;

public:
	RPN();
	RPN(RPN const &other);
	RPN &operator=(RPN const &other);
	~RPN();

	void execRPN(std::string input);

};


#endif