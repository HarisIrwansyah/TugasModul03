#include <iostream>
using namespace std;

int main () {
	char Pilih, P, S ;
	int Al, Pa, Le, Ti, L ;

	
	cout << "P : Persegi Panjang"<<endl ;
	cout << "S : Segitiga"<<endl ;
	cout << "Luas yang akan di Hitung P atau S ? "; cin >> Pilih;

	
	if (Pilih=='P'){
		system ("cls");
		cout << "Anda Menghitung Luas Persegi Panjang"<<endl ;
		cout <<""<<endl;
		cout << "Berapa Panjang Persegi Panjangnya ? "; cin >> Pa ;
		cout << "Berapa Lebar Persegi Panjangnya   ? "; cin >> Le ;
		L = Pa*Le ;
		cout << "Jadi Luas Persegi Panjangnya adalah  "<< L ;
	}
}
