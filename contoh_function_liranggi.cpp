#include<iostream>
using namespace std;

void penjumlahan (){
 int a,b;
 cout<<"   ===PENJUMLAHAN==="<<endl;
 cout<<"Masukkan Input A : ";
 cin>>a;
 cout<<"Masukkan Input B : ";
 cin>>b;
 cout<<"Hasil            : "<<a+b<<endl<<endl;

}
void pengurangan (){
 int a,b;
 cout<<"   ===PENGURANGAN==="<<endl;
 cout<<"Masukkan Input A : ";
 cin>>a;
 cout<<"Masukkan Input B : ";
 cin>>b;
 cout<<"Hasil            : "<<a-b<<endl<<endl;

}

void perkalian (){
 int a,b;
 cout<<"   ===PERKALIAN==="<<endl;
 cout<<"Masukkan Input A : ";
 cin>>a;
 cout<<"Masukkan Input B : ";
 cin>>b;
 cout<<"Hasil            : "<<a*b<<endl<<endl;

}
void pembagian (){
 int a,b;
 cout<<"   ===PEMBAGIAN==="<<endl;
 cout<<"Masukkan Input A : ";
 cin>>a;
 cout<<"Masukkan Input B : ";
 cin>>b;
 cout<<"Hasil            : "<<a/b<<endl<<endl;

}
int main(){
 penjumlahan();
 pengurangan();
 perkalian();
 pembagian();

 getchar();
 getchar();
 return 0;
}


