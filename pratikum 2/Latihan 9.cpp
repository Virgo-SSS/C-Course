#include <iostream>
using namespace std;

int main()
{
	float jml_belanja, discount = 0, jml_bayar;
	cout << "Besarnya Belanja: ";
	cin >> jml_belanja;
	
	if(jml_belanja >= 100000){
		discount = 0.10 * jml_belanja;
		jml_bayar = jml_belanja - discount;
	}
	
	cout << "\nDiscount: " << discount;
	cout << "\nUang Pembayaran: " << jml_bayar;
}
