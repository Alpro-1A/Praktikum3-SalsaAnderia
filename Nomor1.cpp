#include <iostream>

using namespace std;

int main()
{
	int nilai;
    cout << "Masukan nilai :";cin>>nilai;
	if (nilai>=90){
		cout<<"Selamat! Anda mendapatkan nilai A."<<endl; // score bernilai 90 atau lebih
	} else if (nilai>=80){
		cout<<"Anda mendapat nilai B."<<endl; // score bernilai 80 hingga 89
	} else if (nilai>=70){
		cout<<"Anda mendapat nilai C."<<endl; // score bernilai 70 hingga 79
	} else if (nilai>=60){
		cout<<"Anda mendapat nilai D."<<endl; // score bernilai 60 hingga 69
	} else if (nilai<60){
		cout<<"Anda mendapat nilai E."<<endl; // score bernilai di bawah 60	
	}
    
    return 0;
}
