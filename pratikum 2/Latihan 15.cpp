#include <iostream>
using namespace std;

int main()
{
	char kaya;
	
	cout << "Apakah Saya Termasuk Orang Kaya (y/n): ";
	cin >> kaya;
	
	if(tolower(kaya) == 'y')
	{
	cout << "\nSaya akan sering pergi ke Hawaii";
	cout << "\nDan makan makanan yang mahal-mahal";
	cout << "\nSerta bersenang senang di Las Vegas";
	}
	else
	{
	cout << "\nHiburan Saya Hanya Acara TV";
	cout << "\nDan makanan saya hanya itu-itu saja";
	}
}
