#include <any>
#include <string>
#include <complex>
#include <iostream>

int main()
{
	auto a1{ std::make_any<std::string>(10, 'X') };
	auto a2{ std::make_any<std::complex<double>>(1.2, 4.5) };

	std::cout << std::any_cast<std::string>(a1) << '\n';
	std::cout << std::any_cast<std::complex<double>>(a2) << '\n';
}
