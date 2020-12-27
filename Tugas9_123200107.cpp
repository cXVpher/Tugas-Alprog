#include <iostream>
using namespace std;

int main()
{
	int deret;
	cout << "Masukkan banyak angka : "; cin >> deret;
	int arr[deret];
	int max = -99999;
	int min = 99999;
	
	for(int i = 0; i < deret; i++){
		cout << "Angka ke-" << i + 1 << " : "; cin >> arr[i];
	}
	cout << endl << endl;

	cout << "_____Hasil_____\n";
	cout << "Deret 		: ";
	for(int j = 0; j < deret; j++){
		cout << arr[j] << " ";
	}
	cout << endl;
	cout << "Maksimum 	: ";
	for(int k = 0; k < deret; k++){
		if(arr[k] > max){
			max = arr[k];
		}
		if(arr[k] < min){
			min = arr[k];
		}
	}
	cout << max << endl;
	cout << "Minimum 	: " << min << endl;
	cout << "Rata-rata 	: ";
	float total = 0;
	float rata;
	for(int l = 0; l < deret; l++){
		total += arr[l];
	}
	rata = (total/deret) * 1.0;
	cout << rata << endl;

	int selisih, max1 = -99999, selisih1;
	cout << "Selisih Max	: ";
	for(int m = 0; m < deret - 1; m++){
		selisih = arr[m] - arr [m+1];
		if(selisih < 0){
			selisih * (-1);
		}
		if(selisih > max1){
			max1 = selisih;
		}
	}
	cout << max1<< endl;
	system("pause");
	return 0;
}