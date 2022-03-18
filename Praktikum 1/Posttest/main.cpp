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
	
	cout<<"Masukan Pilihan : ";
	cin>>pil;
	cout<<"Masukan Bilangan pertama : ";
	cin>>bil1;
	cout<<"Masukan Bilangan kedua : ";
	cin>>bil2;	
	
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
