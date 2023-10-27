#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cout<<"\n=========================\n";
	cout << "Manakah yang lebih besar?";
	cout<<"\n=========================\n";
	// Input nilai a, b, c
    cout << "Masukan nilai A:";cin>>a;
	cout << "Masukan nilai B:";cin>>b;
	cout << "Masukan nilai C:";cin>>c;
	
		cout<<"Nilai terbesar adalah :";
		
		
	//Jika A adalah nilai terbesar
	if ( a>b && a>c){
		cout<<a<<endl;	
	} 
	//Jika B adalah nilai terbesar
	else if (b>a && b>c){
		cout<<b<<endl;
	}
	//Jika C adalah nilai terbesar
	else if (c>a && c>b){
		cout<<c<<endl;
	}
	cout<<"\n=========================\n";
    return 0;
}
