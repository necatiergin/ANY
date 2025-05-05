#include <any>
#include <iostream>

struct Base { /*....*/ };
struct Der : Base { /*....*/ };

int main()
{
	std::any a = Der();
	if (Base* base_ptr = std::any_cast<Base>(&a)) {
		std::cout << "correct type\n";
	}
	else {
		std::cout << "incorrect type\n";
	}
}
