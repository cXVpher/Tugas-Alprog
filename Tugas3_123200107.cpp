#include <iostream>
using namespace std;

int main()
{
	string uname;
	int pword;
	int pil;
	float harian, uts, uas;
	float hasil;

	cout << "Login akun===========" << endl;
	cout << "Username\t : "; cin >> uname;
	cout << "Password\t : "; cin >> pword;
	cout << "=====================" << endl;

	if(uname == "admin" && pword == 123){
		cout << "Login berhasil!" << endl;
		cout << "Input Nilai Mata Kuliah" << endl;
		cout << "1. Algoritma dan Pemrograman\n";
		cout << "2. Kalkulus\n";
		cout << "Pilih : "; cin >> pil;
		if(pil == 1){
			cout << "Nilai Harian\t : "; cin >> harian;
			cout << "Nilai UTS\t : "; cin >> uts;
			cout << "Nilai UAS\t : "; cin >> uas;
			cout << endl;
			hasil = (harian + uts + uas)/3;
			if(hasil >= 80){
				cout << "Anda lulus Algoritma dan Pemrograman dengan nilai " << hasil << endl;
			}else{
				cout << "Anda tidak lulus Algoritma dan Pemrograman dengan nilai " << hasil << endl;
			}

		}else if(pil == 2){
			cout << "Nilai Harian\t : "; cin >> harian;
			cout << "Nilai UTS\t : "; cin >> uts;
			cout << "Nilai UAS\t : "; cin >> uas;
			cout << endl;
			hasil = (harian + uts + uas)/3;
			if(hasil >= 80){
				cout << "Anda lulus Kalkulus dengan nilai " << hasil << endl;
			}else{
				cout << "Anda tidak lulus Kalkulus dengan nilai " << hasil << endl;
			}
		}else{
			cout << "Input anda salah!\n";
		}
	}else if(uname == "admin" && pword != 123){
		cout << "Password anda salah!" << endl;
	}else if(pword == 123 && uname != "admin"){
		cout << "Username anda salah!" << endl;
	}else if(uname != "admin" && pword != 123){
		cout << "Username dan password anda salah!" << endl;
	}

	cin.get();
	return 0;
}