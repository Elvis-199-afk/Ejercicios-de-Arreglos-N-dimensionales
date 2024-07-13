#include<iostream>
using namespace std;

int main(){
	int matriz[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int diagonalPrincipal=0, diagonalSecundaria=0, suma;
	cout<<"La matriz es: \n";
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	
	for(int i=0;i<4;i++){
		diagonalPrincipal+=matriz[i][i];
		diagonalSecundaria+=matriz[i][3-i];
	}
	
	suma=diagonalPrincipal+diagonalSecundaria;
	cout<<"La suma de las diagonales es: "<<suma<<endl;
	return 0;
}