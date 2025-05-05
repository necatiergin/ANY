#include <any>
#include <string>
#include <iostream>

int main()
{
	std::any a = std::string{ "necati ergin" };
	std::any b = std::move(a); 

	std::cout << any_cast<std::string>(b) << '\n';
	std::cout << any_cast<std::string>(a).size() << '\n';
	
	if (a.has_value())
		std::cout << "has a value\n";
	else
		std::cout << "has no value\n";
}
