#include <iostream>
using namespace std;

int main()
{
	float jari,luas,kel;
	const float pi = 3.14;
	
	cout << "Program Menghitung Keliling & Luas Lingkaran \n";
	
	// Input
	cout << "Masukkan Jari-Jari: ";
	cin >> jari;
	
	// Rumus
	kel = pi * 2 * jari;
	luas = pi * jari * jari;
	
	// Hasil
	cout << "Keliling Lingkaran adalah : " << kel << "\n";
	cout << "Luas Lingkaran adalah : " << luas;
}
