#include<iostream>
using namespace std;
void rotarMatriz(int matriz[4][4], int matrizR[4][4]){
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			matrizR[j][3-i]=matriz[i][j];
		}
	}
	cout<<"Matriz: \t\tMatriz rotada 90 grados en sentido horario:\n";
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<"\t\t";
		for(int j=0;j<4;j++){
			cout<<matrizR[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	int matriz[4][4] = {{1, 2, 3, 4},{5, 6, 7, 8},{9, 1, 2, 3},{4, 5, 6, 7}};
	int matrizRotada[4][4];
	rotarMatriz(matriz,matrizRotada);
	return 0;
}