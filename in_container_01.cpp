#include <vector>
#include <any>
#include <string>
#include <iostream>
#include <iomanip>

using tv_pair = std::pair<std::string, std::any>;

int main()
{
    using namespace std::literals;

    std::vector<tv_pair> vec;

    vec.emplace_back("name", "ahmet aksoy"s);
    vec.emplace_back("year", 1998);
    vec.emplace_back("month", 11);
    vec.emplace_back("month day", 22);
    vec.emplace_back("wage", 87.67);
    vec.emplace_back("town", "eskisehir"s);
    vec.emplace_back("gender", "male"s);
    vec.emplace_back("country", "Turkey"s);
    //

    std::cout << std::left;
    for (const auto& [property, value] : vec) {
        if (value.type() == typeid(int))
            std::cout << std::setw(16) << property << any_cast<int>(value) << '\n';
        else if (value.type() == typeid(double))
            std::cout << std::setw(16) << property << any_cast<double>(value) << '\n';
        else if (value.type() == typeid(std::string))
            std::cout << std::setw(16) << property << any_cast<std::string>(value) << '\n';
    }
}
