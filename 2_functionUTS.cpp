#include<iostream>
using namespace std;

void luas_lingkaran(){
double PHI,jari_jari;
cout <<"masukkan jari-jari:";cin>>jari_jari;
cout<<"masukkan PHI : ";cin>>PHI;


double luas = PHI* jari_jari * jari_jari;
cout<<"luas lingkaran adalah:"<<luas<<endl;
}

void kell_lingkaran(){
double PHI,jari_jari;
double kel = 2*PHI*jari_jari;
cout<<"keliling lingkaran adalah:"<<kel<<endl;
}
int main()
{
	luas_lingkaran();
	kell_lingkaran();

	getchar();
	getchar();
    return 0;
}
