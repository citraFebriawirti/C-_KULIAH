#include<iostream>
using namespace std;
double p=5;
double l=7;
 void luas_pp(){
   double luas = p*l;
   double kell=2*(p+l);
   cout <<"luas persegi panjang adalah:"<<luas<<endl;
 }
 void kell_pp(){
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
