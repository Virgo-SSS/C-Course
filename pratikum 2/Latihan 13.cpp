#include <iostream>
using namespace std;

int main()
{
	int bilangan;
	
	cout << "Ketikkan Sebuah Bilangan Bulat antara 1 s/d 5: ";
	cin >> bilangan;
	
	switch(bilangan)
	{
		case 1 :
			cout << "Anda Mengetikkan Angka Satu";
			break;
		case 2 :
			cout << "Anda Mengetikkan Angka Dua";
			break;
		case 3 :
			cout << "Anda Mengetikkan Angka Tiga";
			break;
		case 4 :
			cout << "Anda Mengetikkan Angka Empat";
			break;
		case 5 :
			cout << "Anda Mengetikkan Angka Lima";
			break;
		default :
			cout << "Anda Mengetikkan Angka yang Salah";
			break;
	}
}
