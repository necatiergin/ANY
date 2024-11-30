#include <any>
#include <iostream>

int main()
{
	boolalpha(std::cout);

	std::any a;
	std::cout << a.has_value() << '\n'; //false
	a = 45;
	std::cout << a.has_value() << '\n'; //true
	a.reset();
	std::cout << a.has_value() << '\n'; //false
	a = false;
	std::cout << a.has_value() << '\n'; //true
	a = {};
	std::cout << a.has_value() << '\n'; //false
}
