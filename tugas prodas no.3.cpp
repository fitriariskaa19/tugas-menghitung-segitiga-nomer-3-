/* Menghitung Segitiga Siku-Siku */
/* Fitri Ariska */
/* 20051397082 */
/* 2020B */


#include <iostream>
using namespace std;
int main(){
	
	int a,b,c,t;
	float panjangsisimiring, luas, keliling, keluar;
	
	
	cout << "Masukkan panjang alas: ";
	cin >> a;
	cout << "Masukkan panjang tinggi: ";
	cin >> t;
	{
	panjangsisimiring = a*a+t*t;
	cout << "panjang sisi miring adalah " <<
	panjangsisimiring << endl;
	luas = (a+b)*t/2;
	cout << "luas segitiga adalah " <<
	luas << endl;
	keliling = a+b+c;
	cout << "keliling segitiga adalah " <<
	keliling << endl;
    }
	
	cout <<"\n \n \n \n";
	cout <<"\npanjang sisi miring : " << panjangsisimiring;
	cout <<"\nhitung luas : " << luas;
	cout <<"\nhitung keliling : " <<keliling;
	cout <<"\nkeluar program : " <<keluar;

	return 0;
}

