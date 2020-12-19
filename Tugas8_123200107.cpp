#include <iostream>
using namespace std;

void b();
float luas(int x);
float kel(int y);
float vol(int a, int b);

int main()
{
	string pil;
	int j, t;
	short pilih;
	do{
	cout << "Hitung Lingkaran "; b();
	cout << "1. Luas Lingkaran\n2. Keliling Lingkaran\n3. Volume Tabung\n";
	cout << "Pilih : "; cin >> pilih;

	switch(pilih){
		case 1 :
			cout << "Jari - jari	: "; cin >> j;
			cout << "Luas Lingkaran adalah " << luas(j) << endl;
			break;
	
		case 2 :
			cout << "Jari jari 		: "; cin >> j;
			cout << "Keliling Lingkaran adalah " << kel(j) << endl;
			break;

		case 3 :
			cout << "Jari - jari 	: "; cin >> j;
			cout << "Tinggi 		: "; cin >> t;
			cout << "Volume Tabung adalah " << vol(j, t) << endl;
			break;
	}
	cin.ignore();
	cout << "Ulangi program? (y/n) "; cin >> pil;
	cout << endl;
	}while(pil == "y" || pil == "Y");
	cout << "Program selesai, Terima kasih :)\n\n";
	system("pause");
	return 0;
}

void b(){
	cout << "==========" << endl;
}

float luas(int x){
	float luas;
	luas = 3.14 * x * x;
	return luas;
}
float kel(int y){
	float luas1;
	luas1 = 3.14 * 2 * y;
	return luas1;
}
float vol(int a, int b){
	float luas2;
	luas2 = 3.14 * a * a * b;
	return luas2;
}