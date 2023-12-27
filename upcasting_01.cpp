#include <any>
#include <iostream>

struct Base { /*....*/ };
struct Der : Base { /*....*/ };

int main()
{
	using namespace std;

	any a = Der();
	if (Base* base_ptr = std::any_cast<Base>(&a)) {
		cout << "correct type\n";
	}
	else {
		cout << "incorrect type\n";
	}
}
