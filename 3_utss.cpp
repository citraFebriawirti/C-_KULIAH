#include<iostream>
#include <string>
using namespace std;

int main(){
  string nama = "citra febriawirti" ;
  int lama_menginap ;
  int tarif_kamar  ;
  int  total_bayar;
  string  bonus ;


cout<<"nama saya adalah "<<nama<<endl;
cout<<"lama inap adalah : " ;
cin>>lama_menginap ;
cout<<"tarif kamar : ";
cin>>tarif_kamar;

  total_bayar = lama_menginap*tarif_kamar;

  if( total_bayar > 500000 ){
	   bonus = "Voucher KFC senilai 100.000";
  }else if (total_bayar > 400000) {
	   bonus = "Voucher Pulsa senilai 50.000";
  }else  {
		 bonus = "tidak mendapatkan bonus ";}

cout<<"Total bayar adalah : "<<total_bayar;
cout<<"\n bonus yang didapatkan adalah : "<<bonus;

getchar();
getchar();
return 0;



}
