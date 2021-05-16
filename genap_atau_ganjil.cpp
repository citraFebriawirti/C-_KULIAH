// CITRA FEBRIAWIRTI 201100032
//3.menentukan apakah sebuah bilangan genap atau ganjil ?
#include <iostream>  // mulai
using namespace std;

int main(){
int bilangan;   // input

cout<<"masukkan bilangan bulat yang akan diperiksa: "; // proses
cin>>bilangan;

// melakukan pengecekan bilangan apakah tidak habis di bagi dua atau tidak ?

 if( bilangan % 2 != 0){
  cout<<bilangan<<" adalah bilangan ganjil";   // output
 } else{
	cout<<bilangan<<" adalah bilangan genap";  // output
 }
   getchar();
   getchar();
   return 0;
}
// selesai
