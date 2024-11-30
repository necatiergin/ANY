#include <any>
#include <iostream>

int main()
{
	boolalpha(std::cout);

	std::any x;
	std::cout << (x.type() == typeid(void)) << '\n';
	x = 12;
	std::cout << (x.type() == typeid(int)) << '\n'; //true
	std::cout << (x.type() == typeid(double)) << '\n'; //false
}
