#include <iostream>

using namespace std;

int main()
{
	int kode;
cout<<"          ============================\n";
cout<<"            PROGRAM MENGHITUNG LUAS";
cout<<"\n          ============================\n";
      //Pilihan jenis bangun datar yang akan dihitung luasnya
cout<<"\n ____________________________________________";
cout<<"\n| Kode Bangun Datar                          |";
cout<<"\n| 1.Persegi         | Luas Persegi           |";
cout<<"\n| 2.Persegi Panjang | Luas Persegi Panjang   |";
cout<<"\n| 3.Segitiga        | Luas Segitiga          |";
cout<<"\n|____________________________________________|";
// input kode bangun datar
awal: //label untuk mengulang program saat kode yang dimasukkan tidak sesuai
cout<< "\n Masukkan kode bangun datar (1/2/3) :"; cin>>kode; 

	switch (kode){
		
		//Jika kode = 1
		case 1: {
			//tipe data yang digunakan adalah double agar memungkinkan untuk menghitung nilai desimal
			double sisi, luas;
			cout<<"Masukan panjang sisi : ";cin>>sisi;
			luas = sisi*sisi;
			cout<<"Luas persegi adalah : "<<luas<<endl;
			break;
		}
		
		//Jika kode = 2
		case 2: {
			double panjang, lebar, luas;
			cout<<"Masukkan panjang persegi : ";cin>>panjang;
			cout<<"Masukkan lebar persegi: ";cin>>lebar;
			luas = panjang*lebar;
			cout<<"Luas persegi panjang adalah : "<<luas<<endl;
			break;
		}
		 //Jika kode = 3
		 case 3: {
		 	double alas, tinggi, luas;
		 	cout<<"Masukkan alas segitiga : ";cin>>alas;
		 	cout<<"Masukkan tinggi segitiga : ";cin>>tinggi;
		 	luas = (alas*tinggi)/2;
		 	cout<<"Luas segitiga adalah : "<<luas<<endl;
			break;
		 }
		 
		 default :
		 	cout<<" !! NETNOT kode yang kamu masukkan tidak sesuai !! \n";
		 	cout<<"     Mohon pilih sesuai nomor tersedia (1/2/3)\n";
		 	goto awal; //meminta program agar melompat ke baris yang miliki label dengan nama tersebut.
	}

    return 0;
}
