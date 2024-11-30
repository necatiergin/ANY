#include <any>
#include <iostream>

int main()
{
	using namespace std;

	int ar[] = { 1, 2, 3, 4, 5 };

	any a = ar;

	cout << "sizeof(a) = " << sizeof(a) << '\n';


	if (a.type() == typeid(int[])) {
		cout << "stores an array\n";
	}
	else if (a.type() == typeid(int*)) {
		cout << "stores a pointer\n";
	}

	cout << a.type().name() << '\n';
}
