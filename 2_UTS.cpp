#include<iostream>
#define PHI 3,14
using namespace std;

int main(){
float luas,kel,jari_jari;

cout <<"----*MENGHITUNG LUAS DAN KELILING LINGKARAN*----"<<endl<<endl;
cout <<"\t\tMASUKKAN jari-jari lingkaran : ";cin>>jari_jari;

luas = PHI* jari_jari * jari_jari;
kel = 2*PHI*jari_jari;

cout<<"-----*jawaban*-----"<<endl<<endl;
cout<<"\tJadi Luas Lingkaran\t\t: "<<luas<<endl;
cout<<"\tJadi Keliling Lingkaran\t\t: "<<kel<<endl;

getchar();
getchar();

}
