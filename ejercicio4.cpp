#include <iostream>
using namespace std;

void mostrarMatriz(int matriz[4][4]) {
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
}

void intercambiarFilas(int matriz[4][4], int fila1, int fila2) {
    for (int j=0;j<4;j++) {
    	int temp;
        temp=matriz[fila1][j];
        matriz[fila1][j] = matriz[fila2][j];
        matriz[fila2][j] = temp;
    }
}

int main() {
    int matriz[4][4] = {{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12},{13, 14, 15, 16}};
	int fila1, fila2;
    cout<<"Matriz:\n";
    mostrarMatriz(matriz);
    cout<<"\nFilas a intercambiar:\n";
    cin>>fila1>>fila2;
    intercambiarFilas(matriz, fila1, fila2);
    cout << "\nMatriz resultante:\n";
    mostrarMatriz(matriz);

    return 0;
}

