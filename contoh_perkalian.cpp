#include<iostream>
using namespace std;

int main(){

int a[10][10];
for(int i=1;i<=10;i++){
   for (int j = 1; j <= 10; j++) {
		a [i][j]=i*j;
   }

}

	cout <<"  1x1 = "<< a[1][1]<<endl;
	cout <<"  1x2=  "<< a[1][2]<<endl;
	cout <<"  1x3=  "<< a[1][3]<<endl;
	cout <<"  1x4=  "<< a[1][4]<<endl;
	cout <<"  1x5=  "<< a[1][5]<<endl;
	cout <<"  1x6=  "<< a[1][6]<<endl;
	cout <<"  1x7=  "<< a[1][7]<<endl;
	cout <<"  1x8=  "<< a[1][8]<<endl;


	getchar();
	getchar();
    return 0;
}
