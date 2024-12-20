#include <any>
#include <iostream>
#include <string>
#include <type_traits>
#include <utility>

int main()
{
    using namespace std;

    any a{ "Kaya"s };

    auto& ra = any_cast<string&>(a);
    ra[0] = 'M';

    cout << any_cast<string const&>(a) << '\n';

    auto str = any_cast<string&&>(move(a));

    static_assert(is_same_v<decltype(str), string>);

    cout << "a.size(): " << any_cast<string>(&a)->size() << '\n';

    cout << "str: " << str << '\n';
}
