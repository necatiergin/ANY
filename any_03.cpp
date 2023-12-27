#include <any>
#include <iostream>
#include <string>

int main()
{
    using namespace std;

    boolalpha(cout);

    any a1;
    cout << "a1.has_value(): " << a1.has_value() << '\n';

    any a2 = 99;
    std::cout << "a2.has_value(): " << a2.has_value() << '\n';
    std::cout << "a2 = " << std::any_cast<int>(a2) << '\n';
    a2.reset();
    std::cout << "a2.has_value(): " << a2.has_value() << '\n';
    
    auto a3 = make_any<string>("Necati Ergin");
    cout << "a3.has_value(): " << a3.has_value() << '\n';
    cout << "a3 = " << any_cast<string&>(a3) << '\n';
    a3.reset();
    cout << "a3.has_value(): " << a3.has_value() << '\n';
}
