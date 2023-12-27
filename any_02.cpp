#include <any>
#include <iostream>
#include <string>

int main()
{
	using namespace std;

	cout << boolalpha;

	any ax = 10;
	cout << ax.type().name() << ": " << any_cast<int>(ax) << '\n';
	ax = 2.781828;
	cout << ax.type().name() << ": " << any_cast<double>(ax) << '\n';
	ax = true;
	cout << ax.type().name() << ": " << any_cast<bool>(ax) << '\n';

	ax = "alican"s;
	cout << ax.type().name() << ": " << any_cast<string>(ax) << '\n';


	try
	{
		ax = 21;
		cout << any_cast<float>(ax) << '\n';
	}
	catch (const bad_any_cast& e)
	{
		std::cout << "exception caught: " << e.what() << '\n';
	}

	// has value
	ax = 1;
	if (ax.has_value()) {
		cout << "type : " << ax.type().name() <<
			" value : " << any_cast<int>(ax) << "\n";
	}

	// reset
	ax.reset();
	if (!ax.has_value())
	{
		cout << "empty\n";
	}

	// pointer to the object stored
	ax = 1;

	//int* iptr = any_cast<int>(&ax);
	if (auto iptr = any_cast<int>(&ax))
		cout << *iptr << '\n';
}
