#include <iostream>
using namespace std;

int main() {
  int i, j, m, n, matriks1[10][10], matriks2[10][10], hasil[10][10];
  cout << "Masukkan jumlah baris matriks: ";
  cin >> m;
  cout << "Masukkan jumlah kolom matriks: ";
  cin >> n;
  cout << "Masukkan elemen matriks pertama: \n";
  for(i = 0; i < m; i++){
	for(j = 0; j < n; j++){
	  cin >> matriks1[i][j];
	}
  }
  cout << "Masukkan elemen matriks kedua: \n";
  for(i = 0; i < m; i++){
	for(j = 0; j < n; j++){
	  cin >> matriks2[i][j];
	}
  }
  cout << "hasil penjumlahan matriks: \n";
  for(i = 0; i < m; i++){
	for(j = 0; j < n; j++){
	  hasil[i][j] = matriks1[i][j] + matriks2[i][j];
	  cout << hasil[i][j] << "\t";
	}
	cout << endl;
  }
  cout << "hasil pengurangan matriks: \n";
  for(i = 0; i < m; i++){
	for(j = 0; j < n; j++){
	  hasil[i][j] = matriks1[i][j] - matriks2[i][j];
	  cout << hasil[i][j] << "\t";
	}
	cout << endl;
  }
  cout << "hasil perkalian matriks: \n";
  for(i = 0; i < m; i++){
	for(j = 0; j < n; j++){
	  hasil[i][j] = matriks1[i][j] * matriks2[i][j];
	  cout << hasil[i][j] << "\t";
	}
	cout << endl;
  }

  getchar();
  getchar();
  return 0;
}
