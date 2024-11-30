#include <any>
#include <string>
#include <vector>
#include <set>

class Nec
{
	int mx, my;
public:
	Nec(int x, int y) : mx{ x }, my{ y } { }
	//...
};

int main()
{
	using namespace std;

	auto fcmp = [](int x, int y) {return abs(x) < abs(y); };
	any a;

	a = 12; //int
	a = Nec{ 10, 20 }; //Nec
	a.emplace<Nec>(2, 5); //Nec
	a.emplace<string>(10, 'A'); //string
	a.emplace<vector<int>>(100); //vector<int>
	a.emplace<set<int, decltype(fcmp)>>({ 1, 5, -4, -6, 3 }, fcmp);
}
