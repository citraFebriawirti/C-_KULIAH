#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <conio.h>
#include <iostream>

using namespace std;

int main() {

	int i=0;
		while (i <= 20){
			cout<<"STMIK INDONESIA PADANG "<<endl;
			i++;
		}
	getchar();
	getchar();

	return 0;
}
