#include <iostream>
using namespace std;

int main()
{
	cout << "Program untuk Menghitung Umur\n";
	cout << "------------------------------\n\n";
	
	int thn_lahir, thn_skrg, umur;
	
	cout << "Masukkan tahun lahir anda: ";
	cin >> thn_lahir;
	
	cout << "Masukkan tahun saat ini: ";
	cin >> thn_skrg;
	
	umur = thn_skrg - thn_lahir;
	
	cout << "Umur anda sekarang adalah " << umur << " Tahun";
}
