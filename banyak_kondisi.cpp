// CITRA FEBRIAWIRTI 20110032
// 2.nilai mahasiswa
#include <iostream>

using namespace std;
int main(){
 double nilai;  // inputnya
 char indeks;

 // meminta user untuk menentukan nilai
 // yang diperoleh dalam bentuk bilangan

 cout<<"masukkan nilai yang diperoleh: ";
 cin>>nilai;

 // melakukan konversi nilai menjadi nilai indeks   // prosesnya
 if(nilai >=85){
   indeks ='A';
 } else if ( nilai >= 70){
   indeks ='B';
 } else if ( nilai >= 55) {
   indeks = 'C';
 } else if (nilai >= 40) {
   indeks = 'D';
 } else {
	 indeks = 'E';
 }

 // menampilkan nilai indeks yang didapatkan   // outputnya
 cout<<"Nilai indeks dari nilai "<<nilai<<" adalah "<<indeks;

getchar();
getchar();
return 0;

}
// selesai
