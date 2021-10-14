#include<iostream>
#include<string>
using namespace std;

void input_dalam(){
string nm_plgn,nm_brg;

cout <<"Nama pelanggan :";cin>>nm_plgn;
cout <<"Nama barang    :";cin>>nm_brg;
}

void input_luar(){
string voucher;
int hrg_brg,byk_brg,total_bayar,diskon,total_blj,total_byr;

cout <<"Harga barang   :Rp ";cin>>hrg_brg;
cout<<"Banyak barang  :  ";cin>>byk_brg;
cout<<"buah";


total_blj = byk_brg * hrg_brg;

 if (total_blj>1000000) {
		diskon= 0.1 * total_blj;
	}
	else if(total_blj>500000){
		 diskon= 0.05 * total_blj;
	}
	else {
		diskon =  0 *  total_blj;
	}

cout<<"\n Diskon adalah  :   "<<diskon<<endl;
cout<<"Total belanja  :Rp "<<total_blj<<endl;

total_bayar = total_blj - diskon;
cout<<"Total bayar    :Rp   "<<total_bayar<<endl;

	if (total_blj>500000) {
		voucher = "es wall 5 buah";
	}
	else {
		voucher = "ice 3 buah";
	}


cout<<"Voucher        : "<<voucher;
}

int main()
{
input_dalam();
input_luar();


getchar();
getchar();
return 0;
}
