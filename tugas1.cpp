#include <stdio.h>
#include <conio.h>
#include <iostream>

  using namespace std;
  
int main()
{
	//deklarasi variabel
    	double meter, yard, kaki, inchi;
	
	//masukkan data
	 cout<<"Konversi dari Meter ke Yard, Kaki, dan Inchi"<<endl;
	 cout<<"Input Meter : ";
	 cin>>meter;
	     
	     //proses dari meter ke yard, kaki, dan inchi
	     yard  = meter / 0.9144;
	     kaki  = meter / 0.3048;
	     inchi = meter / 0.0254;
	     
	     //menampilkan hasil
	     cout<<meter<<" Meter = "<<yard<< "Yard"<<endl;
	     cout<<meter<<" Meter = "<<kaki<< "Kaki"<<endl;
	     cout<<meter<<" Meter = "<<inchi<< "Inchi"<<endl;
	     
return 0;
}
