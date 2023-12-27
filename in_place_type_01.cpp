#include <any>
#include <string>
#include <complex>
#include <set>

int main()
{
	using namespace std;
	any a1{ "alican" };  //const char *
	any a2{ in_place_type<string>, "necati" }; //string
	any a3{ in_place_type<complex<double>>, 4.5, 1.2 }; //complex<double>
	auto fc = [](int a, int b) {return std::abs(a) < std::abs(b); };
	any a4{ in_place_type<set<int, decltype(fc)>>, {1, 4, 5}, fc }; //set<int>
	//...
}
