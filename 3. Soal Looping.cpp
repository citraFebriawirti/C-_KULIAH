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

int main(){
	int n;
		cout<<"Masukan n : ";cin>>n;
		int i=0;
		while(n!=0){
			if(i % 2 ==0){
                   cout<<i<<" ";
				   n--;
			 }i++;
		}
	  getchar();
	  getchar();
	  return 0;
}
