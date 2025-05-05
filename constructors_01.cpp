#include <string>
#include <any>
#include <bitset>
#include <vector>

int main()
{
	using namespace std::literals;

	std::any a1{ 12 }; //int
	std::any a2 = 4.5; //double
	std::any a3{ "necati" }; //const char *
	std::any a4{ "necati"s }; //std::string
	std::any a5{ std::bitset<16>{} }; //std::bitset<16>
	std::any a6{ std::vector<int>{1, 3, 5} }; //std::vector<int>
	std::any b1;  //empty
	std::any b2{}; //empty
	std::any b3 = {}; //empty
}
