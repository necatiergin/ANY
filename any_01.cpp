/*
	sınıfın reset üye fonksiyonu tutulan nesnenin ömrünü sonlandırıyor.
	sınıfın has_value fonksiyonu any nesnesinin bir değer tutup tutmadığını sorguluyor.
*/

#include <any>
#include <iostream>

int main()
{
	using namespace std;

	try {
		any any_val = 876;
		cout << "Deger:  " << any_cast<int>(any_val) << '\n';

		any_val.reset();
		if (!any_val.has_value())
			cout << "degisken bir degere sahip degil\n";

		auto ival = std::any_cast<int>(any_val); //hata gonderecek
	}
	catch (const bad_any_cast& e) {
		cout << "hata yakalandi: " << e.what() << '\n';
	}
}
