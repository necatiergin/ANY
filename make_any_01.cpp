#include <any>
#include <string>
#include <complex>
#include <iostream>

int main()
{
	using namespace std;

	auto a1{ make_any<string>(10, 'X') };
	auto a2{ make_any<complex<double>>(1.2, 4.5) };

	cout << any_cast<string>(a1) << '\n';
	cout << any_cast<complex<double>>(a2) << '\n';
}
