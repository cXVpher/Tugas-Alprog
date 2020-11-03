#include <iostream>
using namespace std;

int main()
{
	int pil, a, b, c, a1;
	int x;
	do{
	system("cls");
	cout << "Perkalian & Perpangkatan=====" << endl << endl;
	cout << "1. Perkalian" << endl;
	cout << "2. Perpangkatan" << endl;
	cout << "Pilih : "; cin >> pil;
	switch(pil){
		case 1 :
			cout << "Input angka N : "; cin >> a;
			cout << "Input angka M : "; cin >> b;
			cout << "\nHasil " << a << " x " << b << endl;
			
			cout << b;
			c = b;
			for(int i = 1; i < a; i++){
				cout << " + " << b;
				a1 = c + b;
				c = a1;
			}
			cout << " = " << c << endl;
			break;

		case 2 : 
			cout << "Input angka N : "; cin >> a;
			cout << "Input angka M : "; cin >> b;
			cout << "\nHasil " << a << "^" << b << endl;

			c = a;
			cout << a;

			for(int j = 1; j < b; j++){
				cout << " x " << a;
				a1 = c * a;
				c = a1;
			}
			cout << " = " << c << endl;
			break;
		default :
			cout << "\nSalah Input!" << endl;
			break;
	}
	cout << "\nTerima kasih :)" << endl << endl;
	cout << "Ingin menghitung lagi?" << endl;
	cout << "1 = ya || 2 = tidak" << endl;
	cin >> x;
	cout << endl;
	}
	while(x == 1);

	system("pause");
	cin.get();
	return 0;
}