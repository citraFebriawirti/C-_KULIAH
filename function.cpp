#include<iostream>
using namespace std;
int result;
void tambah(){
 cout<<"Belajar C++"<<endl<<endl;
}
int tambah(int a, int b){
  result = a+b;
  return a+b;
}
int main(){
  tambah();
  cout<<"tambah(5,7)="<<tambah(5,7)<<endl;
  cout<<"result="<<result<<endl;

  getchar();
  getchar();
  return 0;
}
