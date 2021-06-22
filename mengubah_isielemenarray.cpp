// citra febriawirti
//pengubahan nilai array
#include<iostream>

using namespace std;
int main(){
float pecahan []={3.14,-99.01,0.002};

cout<<"isi array pertama : "<<pecahan[0]<<endl;
cout<<"isi array kedua   : "<<pecahan[1]<<endl;
cout<<"isi array ketiga  : "<<pecahan[2]<<endl;
cout<<endl;

pecahan[1]= 9.123;
pecahan[2]=12.9925;

cout<<"isi array pertama : "<<pecahan[0]<<endl;
cout<<"isi array kedua   : "<<pecahan[1]<<endl;
cout<<"isi array ketiga  : "<<pecahan[2]<<endl;

getchar();
getchar();

return 0;

}
