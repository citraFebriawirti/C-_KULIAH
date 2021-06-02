#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main()
{
	string nama, bonus;
	int lama, tarif, total;

	cout<<"Nama tamu            :"; cin>>nama;
	cout<<"Lama Nginap (hari)   :"; cin>>lama;
	cout<<"Tarif kamar          :"; cin>>tarif;
	total = lama * tarif;

	if (total>500000) {
		bonus="Voucer KFC";
	}
	else if(total>400000){
		 bonus="Voucher Pulsa";
	}
	else {
		bonus="Tidak ada bonus";
    }
   cout<<"Total bayar           :"<<total;
   cout<<"\n Bonusnya adalah    :"<<bonus;
   getchar();
   getchar();
   return 0 ;
}
