#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int _tmain(int argc, _TCHAR* argv[]) 
{
	int i;

	for (i = 1; i<=5; i++){
		cout<<i;
		cout<<"\t";
     }

	getchar();
	getchar();
	return 0;
}
