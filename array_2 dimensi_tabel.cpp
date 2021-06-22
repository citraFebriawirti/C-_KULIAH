//CITRA FEBRIAWIRTI 201100032
// PERTEMUAN 13
#include<iostream>
#include<string>
using namespace std;

int main(){
  int n;
  string nama[10];
  int nilai_tugas[10],nilai_uts[10],nilai_uas[10],nilai_akhir[10];

  cout << "jumlah data = ";cin>>n;
  cout<<endl;

  for(int i=0;i<n;i++){
   cout<<endl;

   cout<<"data ke-"<<i+1<<endl;

   cout<<"masukkan nama = ";cin>>nama[i];
   cout<<"masukkan nilai tugas = ";cin>>nilai_tugas[i];
   cout<<"masukkan nilai uts   = ";cin>>nilai_uts[i];
   cout<<"masukkan nilai uas   = ";cin>>nilai_uas[i];
   cout<<"masukkan nilai akhir = ";cin>>nilai_akhir[i];
  }

  cout<<endl;
  cout<<"====================================================="<<endl;
  cout<<" no| nama|nilai tugas|nilai uts|nilai uas|nilai akhir|"<<endl;
  cout<<"======================================================"<<endl;
  for (int i = 0; i < n; i++) {
  cout<<i+1<<"    "<<nama[i]<<"    "<< nilai_tugas[i]<<"       "<< nilai_uts[i]<<"           "<< nilai_uas[i]<<"          "<< nilai_akhir[i]<<"              "<<endl;

  }

  getchar();
  getchar();
  return 0;
}
