#include <any>
#include <iostream>

int main()
{
	int ar[] = { 1, 2, 3, 4, 5 };

	std::any a = ar;

	std::cout << "sizeof(a) = " << sizeof(a) << '\n';


	if (a.type() == typeid(int[])) {
		std::cout << "stores an array\n";
	}
	else if (a.type() == typeid(int*)) {
		std::cout << "stores a pointer\n";
	}

	std::cout << a.type().name() << '\n';
}
