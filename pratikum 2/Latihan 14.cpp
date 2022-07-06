#include <iostream>
using namespace std;

int main()
{
	float angka;
	char huruf;
	
	cout << "Masukkan Nilai Angka (1-100): ";
	cin >> angka;
	
	if(angka < 50)
		huruf = 'E';
	else if (angka >= 50 && angka < 60)
		huruf = 'D';
	else if (angka >= 60 && angka < 70)
		huruf = 'C';
	else if (angka >= 70 && angka < 85)
		huruf = 'B';
	else
		huruf = 'A';
	
	cout << "Nilai Huruf: " << huruf;
}
