#include <iostream>
#include <cstdlib>
#include <any>
#include <string>

void* operator new(size_t n)
{
	std::cout << "operator new called n: " << n << '\n';
	auto vp = std::malloc(n);
	if (!vp)
		throw std::bad_alloc{};
	return vp;
}

void operator delete(void* vp)
{
	if (!vp)
		free(vp);
}

struct Data {
	char buffer[2000];
};

int main()
{
	std::cout << "sizeof(any)        = " << sizeof(std::any) << '\n';
	std::cout << "sizeof (type_info) = " << sizeof(std::type_info) << '\n';

	std::any ax = 10;
	ax = 1.0;
	ax = std::string{ "alican" };
	Data data;
	ax = data;
}
