#include <any>
#include <iostream>
#include <string>

int main()
{
    boolalpha(std::cout);

    std::any a1;
    std::cout << "a1.has_value(): " << a1.has_value() << '\n';

    std::any a2 = 99;
    std::cout << "a2.has_value(): " << a2.has_value() << '\n';
    std::cout << "a2 = " << std::any_cast<int>(a2) << '\n';
    a2.reset();
    std::cout << "a2.has_value(): " << a2.has_value() << '\n';

    auto a3 = std::make_any<std::string>("Necati Ergin");
    std::cout << "a3.has_value(): " << a3.has_value() << '\n';
    std::cout << "a3 = " << any_cast<std::string&>(a3) << '\n';
    a3.reset();
    std::cout << "a3.has_value(): " << a3.has_value() << '\n';
}
