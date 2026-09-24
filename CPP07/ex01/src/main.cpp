#include "iter.hpp"
#include "vector"

int main()
{
	int n[] = {0, 2, 4};
	std::string str[] = {"Bob", "Alice", "John"};
	std::vector<std::string> age;

	age.push_back("22");
	age.push_back("21");
	age.push_back("20");
	
	::iter(n, 3, ::printVal<int>);
	std::cout << std::endl;
	::iter(str, 3, ::printVal<std::string>);
	std::cout << std::endl;
	::iter(age.data(), 3, ::printVal<std::string>);
	std::cout << std::endl << std::endl;

	::iter(n, 3, ::IncrNonConstRef<int>);

	::iter(n, 3, ::printConstRef<int>);
	std::cout << std::endl;
	::iter(str, 3, ::printConstRef<std::string>);
	std::cout << std::endl;
	::iter(age.data(), 3, ::printConstRef<std::string>);
	std::cout << std::endl << std::endl;

	return 0;
}