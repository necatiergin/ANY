#include <any>
#include <iostream>

int main()
{
	using namespace std;
	cout.setf(ios::boolalpha);

	any x;
	cout << (x.type() == typeid(void)) << '\n';
	x = 12;
	cout << (x.type() == typeid(int)) << '\n'; //true
	cout << (x.type() == typeid(double)) << '\n'; //false
}
