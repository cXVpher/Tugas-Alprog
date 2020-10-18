#include <iostream>
using namespace std;


double nilai_akhir(int UTS, int UAS){
	return ((UTS+UAS)/2);
}

int main()
{
	int NIM;
	int UTS, UAS;
	
	string nama;

	cout << "Nama		: "; getline (cin,nama);
	cout << "NIM		: "; cin >> NIM;
	cout << "UTS 		: "; cin >> UTS;
	cout << "UAS 		: "; cin >> UAS;
	cout << endl;
	//nilai_akhir = (UTS + UAS)/2;
	cout << "Hai, nama saya " << nama << ", nim " << NIM << endl;
	cout << "Nilai akhir saya " << nilai_akhir(UTS, UAS) << endl;

	cin.get();
	cin.get();
	return 0;
}