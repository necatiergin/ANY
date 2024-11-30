#include <any>
#include <iostream>
 
int main()
{
	using namespace std;
	cout.setf(ios::boolalpha);
 
	any a;
	cout << a.has_value() << '\n'; //false
	a = 45;
	cout << a.has_value() << '\n'; //true
	a.reset();
	cout << a.has_value() << '\n'; //false
	a = false;
	cout << a.has_value() << '\n'; //true
	a = {};
	cout << a.has_value() << '\n'; //false
}
