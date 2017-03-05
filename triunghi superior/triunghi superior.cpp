#include <iostream>
using namespace std;

void citire(int matrice[100][100], int n);
void triunghi(int matrice[100][100],int n);


void citire(int matrice[100][100], int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout << "matrice[" << i << "][" << j << "]=";
			cin >> matrice[i][j];
		}
	}
	triunghi(matrice, n);
}

void triunghi(int matrice[100][100],int n){
	int i,j=n-1;
	int suma=0,nr=0;
	for(i=n-2;i>=0;i--){
		for(j=n-1;j>0;j--){
			if(j==i){
				i--;
				j=n-1;
			}
			suma+=matrice[i][j];
			nr++;
		}
	}

	cout << "Produsul elementelor triunghiului superior diagonalei principale este:" << (double)suma/nr << endl;

}


int main(){
	int matrice[100][100],n;
	cout << "Introduceti n: ";
	cin >> n;
	citire(matrice, n);


	system("pause");
	return 0;
}