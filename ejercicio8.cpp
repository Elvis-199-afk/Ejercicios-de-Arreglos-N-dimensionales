#include<iostream>
using namespace std;

int main(){
	int matriz[5][5] = {{1, 2, 3, 4, 5},{6, 7, 8, 9, 10},{11, 12, 13, 14, 15},{16, 17, 18, 19,20},{21, 22, 23, 24, 25}};
	int fila1=0,fila2=4,columna1=0,columna2=4;
	cout<<"Matriz:\n";
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\nRecorrido en espiral:\n";
	while(fila1 <= fila2 && columna1 <= columna2){
		
		for(int j=columna1;j<=columna2;j++){
			cout<<matriz[fila1][j]<<" ";
		}
		fila1++;
		
		for(int i=fila1;i<=fila2;i++){
			cout<<matriz[i][columna2]<<" ";
		}
		columna2--;
		
		if (fila1 <= fila2) {
            for (int j = columna2; j >= columna1; j--) {
                cout << matriz[fila2][j] << " ";
            }
            fila2--;
        }

        if (columna1 <= columna2) {
            for (int i = fila2; i >= fila1; i--) {
                cout << matriz[i][columna1] << " ";
            }
            columna1++;
        }
    }
    cout<<endl;
    return 0;
	}
