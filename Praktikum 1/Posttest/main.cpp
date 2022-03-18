#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string>
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
        cout << " angka pertama = "; cin >> satu;
        cout << " angka kedua = "; cin >> dua;
        switch (pil)
	
	switch(pil){
	        case 1 : hasil=bil1+bil2;
			operasi='+';
			break;
		case 2 : hasil=bil1-bil2;
			operasi='-';
			break;
		case 3 : hasil=bil1*bil2;
			operasi='*';
			break;
		case 4 : hasil=bil1/bil2;
			operasi='/';
			break;
		case 5 : hasil=bil1%bil2;
			 operasi='%';
			break;
		default :
			cout<<"Salah Masukan Operator"<<endl;
	}
	cout<<"-----------------------------"<<endl;
	cout<<"    "<<bil1<<operasi<<bil2<<"="<<hasil<<endl;
	cout<<"-----------------------------"<<endl;
	
	getch();
}
