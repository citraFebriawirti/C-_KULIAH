#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i,n,batas=10,jumlah;

	cout<<"program menampilkan perkalian bilangan"<<endl;
	cout<<"======================================"<<endl;
	cout<<"Bilangan yang akan dikalikan : ";
	cin>>n;
	cout<<"======================================"<<endl;
	cout<<"Menampilkan Hasil Perkalian :"<<endl;

	for(i=0;i<=batas;i++)
	{
		jumlah=i*n;
		cout<<i<<"*"<<n<<"="<<jumlah<<endl;
	}

	getchar();
	getchar();

 return 0;

}
