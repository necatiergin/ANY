#include <string>
#include <any>
#include <bitset>
#include <vector>

int main()
{
	using namespace std;

	any a1{ 12 }; //int
	any a2 = 4.5; //double
	any a3{ "necati" }; //const char *
	any a4{ "necati"s }; //std::string
	any a5{ std::bitset<16>{} }; //std::bitset<16>
	any a6{ std::vector<int>{1, 3, 5} }; //std::vector<int>
	any b1;  //empty
	any b2{}; //empty
	any b3 = {}; //empty
}
