#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
	int p,l,Kll;
	// p = panjang,l=lebar,Kll=keliling   sebagai inputnya

	  cout<<" Panjangnya adalah  : ";cin>>p;  // input panjangnya
	  cout<<" Lebarnya adalah  : ";cin>>l;     // input lebarnya


	  Kll = 2 * (p+l); // proses rumusnya

	  cout<<" Keliling persegi panjang adalah : "<<Kll<<endl;// output
	  getchar();// utk menampilkan ke layar supaya mengunci
	  getchar();
	  return 0;

}
