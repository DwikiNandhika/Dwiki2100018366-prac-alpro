#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <windows>

using namespace std;

int main(){
	a:
	system("color 0a");
	cout<<"==================================\n";
	int pil,lagi;;
	float satu,dua;
	string operasi;
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Pembagian"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pengurangan"<<endl;
	cout<<"masukkan pilihan = "; cin >> pil;
	
	if (pil<=4 && pil>=1)
    {
        cout << endl;
        switch (pil)
        {
        case 1:
            cout << " Anda Memiilih Penjumlahan [ + ]" << "\n";break;

        case 2:
            cout << " Anda Memiilih Pembagian [ : ]" << "\n";break;

        case 3:
            cout << " Anda Memiilih Perkalian [ x ]" << "\n";break;

        case 4:
            cout << " Anda Memiilih Pengurangan [ - ]" << "\n";break;
        }
	cout << " Angka pertama = "; cin >> satu;
	cout << " Angka kedua = "; cin >> kedua;
		switch (pil)
		{
			case 1:
				cout << " " << satu << "+" << dua << " = " << satu + dua << "\n"; break;
			case 2:
				cout << " " << satu << ":" << dua << " = " << satu/dua << "\n"; break;
			case 3:
				cout << " " << satu << "x" << dua << " = " << satu*dua << "\n"; break;
			case 4:
				cout << " " << satu << "-" << dua << " = " << satu-dua << "\n"; break;
		}
	}
	else
	{
		cout << " Kesalahan silahkan ulangi !" << "\n\n\n";
	}
	cout << endl;
	cout << " Pilih lagi = [1] / tidak [2] ??";
	cin >> lagi;
	if (lagi == 1)
	{
		system("cls");
		goto a;
	}
	else if(lagi == 2)
	{
		system("cls");
	}
}
