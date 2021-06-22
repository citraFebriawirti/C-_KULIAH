#include<iostream>
using namespace std;

int main(){
  //string nama = "citra febriawirti" ;
  int lama_menginap = 15 ;
  int tarif_kamar = 50000 ;
  float  total_bayar;

  total_bayar = lama_menginap*tarif_kamar;


  string  bonus ;

  if( total_bayar > 500000 ){
	   bonus = "Voucher KFC senilai 100000";
	   }  else if (total_bayar > 400000) {
				   bonus = "Voucher Pulsa senilai 500000";
				   }else if ( total_bayar < 400000) {
					   bonus = "tidak mendapatkan bonus ";
				   }

//cout<<"nama saya adalah "<<nama;
cout<<"lama inap adalah : ";cin>>lama_menginap ;
cout<<"Total bayar adalah : ";<<total_bayar;
cout<<"bonus yang didapatkan adalah : ";<<bonus<<endl;

getchar();
getchar();
return 0;


}
