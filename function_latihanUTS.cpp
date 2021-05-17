#include<iostream>
using namespace std;
void luas_pp(){
double p,l;
cout <<"masukkan panjang:";cin>>p;
cout<<"masukkan lebar:";cin>>l;

double luas=p*l;
cout<<"luas persegi panjang adalah:"<<luas<<endl;
}

void kell_pp(){
double p,l;
double kell=2*(p+l);
cout<<"keliling persegi panjang adalah:"<<kell<<endl;
}
int main()
{
	luas_pp();
	kell_pp();

	getchar();
	getchar();
    return 0;
}
