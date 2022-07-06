#include <iostream>
using namespace std;

int main()
{
	float luas_tanah, harga_sat_tanah, harga_tanah;
	float luas_bangunan, harga_sat_bangunan, harga_bangunan;
	float harga_total;
	char tipe;
	
	// Input
	
	cout << "Luas Tanah: ";
	cin >> luas_tanah;
	cout << "Luas Bangunan: ";
	cin >> luas_bangunan;
	cout << "Tipe: ";
	cin >> tipe;
	
	if (tipe == 'A' || tipe == 'a')
	{
		harga_sat_tanah = 40000;
		harga_sat_bangunan = 150000;
	}
	else
	{
		harga_sat_tanah = 50000;
		harga_sat_bangunan = 200000;
	}
	
	// Rumus
	harga_tanah = luas_tanah * harga_sat_tanah;
	harga_bangunan = luas_bangunan * harga_sat_bangunan;
	harga_total = harga_tanah + harga_bangunan;
	
	// Hasil
	
	cout << "\nHarga Tanah	: " << harga_tanah;
	cout << "\nHarga Bangunan	: " << harga_bangunan;
	cout << "\n=======================================";
	cout << "\nHarga Total	: " << harga_total;
	cout << "\n=======================================";
}
