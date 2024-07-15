#include<iostream>
using namespace std;
void mostrarMatriz(int matriz[4][4]) {
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
}
void maximoYminimo(int matriz[4][4]){
	int max=matriz[0][0],min=matriz[0][0];
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(matriz[i][j]>max){
				max=matriz[i][j];
			}
			if(matriz[i][j]<min){
				min=matriz[i][j];
			}
		}
	}
	cout<<"El maximo valor es: "<<max<<endl;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(matriz[i][j]==max){
				cout<<"Fila "<<i<<", Columna "<<j<<endl;
			}
		}
	}
	cout<<"\n";
	cout<<"El minimo valor es: "<<min<<endl;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(matriz[i][j]==min){
				cout<<"Fila "<<i<<", Columna "<<j<<endl;
			}
			
		}
	}
}
int main(){
	int matriz[4][4] = {{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12},{13, 14, 15, 16}};
	cout<<"Matriz: \n";
	mostrarMatriz(matriz);
	cout<<"\n";
	maximoYminimo(matriz);
	return 0;
}