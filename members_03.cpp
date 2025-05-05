/*
	member function reset destroys the object tha any holds.
	member function has_value tests if any object holds a value.
*/

#include <any>
#include <iostream>

int main()
{
	try {
		std::any any_val = 876;
		std::cout << "value is:  " << any_cast<int>(any_val) << '\n';

		any_val.reset();
		if (!any_val.has_value())
			std::cout << "has no value\n";

		auto ival = std::any_cast<int>(any_val); // throws exception
	}
	catch (const std::bad_any_cast& e) {
		std::cout << "exception caught: " << e.what() << '\n';
	}
}
