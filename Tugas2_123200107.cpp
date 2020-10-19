#include <iostream>
using namespace std;

int main()
{
	int umura, umurb, umurc, umurd;
	int b1, b2, b3, b4;
	int btotal;

	cout << "Umur Ayah 	: "; cin >> umura;
	cout << "Umur Ibu 	: "; cin >> umurb;
	cout << "Umur Anak 1 	: "; cin >> umurc;
	cout << "Umur Anak 2 	: "; cin >> umurd;
	cout << endl;

	if(umura <= 12){
		b1 = 15000;
	} else if(umura > 12 && umura <= 20){
		b1 = 20000;
	} else if(umura > 20){
		b1 = 30000;
	}

	if(umurb <= 12){
		b2 = 15000;
	} else if(umurb > 12 && umurb <= 20){
		b2 = 20000;
	} else if(umurb > 20){
		b2 = 30000;
	}

	if(umurc <= 12){
		b3 = 15000;
	} else if(umurc > 12 && umurc <= 20){
		b3 = 20000;
	} else if(umurc > 20){
		b3 = 30000;
	}

	if(umurd <= 12){
		b4 = 15000;
	} else if(umurd > 12 && umurd <= 20){
		b4 = 20000;
	} else if(umurd > 20){
		b4 = 30000;
	}
	
	btotal = 30*(b1+b2+b3+b4);

	cout << "Tagihan satu bulan adalah Rp " << btotal << endl;

	cin.get();
	cin.get();
	return 0;
}