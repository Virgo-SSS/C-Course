#include <iostream>
using namespace std;

int main()
{
	int jam, menit, hasil;
	
	cout << "Program Konversi Jam\n\n";
	
	cout << "Input Jam: ";
	cin >> jam;
	cout << "Input Menit: ";
	cin >> menit;
	
	hasil = jam * 60 + menit;
	
	cout << "Hasilnya adalah " << hasil << " Menit";
}
