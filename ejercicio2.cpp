#include<iostream>
using namespace std;

int main(){
	int matriz[3][3], num;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Digite el elemento en la posicion ["<<i<<"]["<<j<<"]: ";
			cin>>matriz[i][j];
		}
	}
	cout<<"Ingrese el numero que desea buscar: ";
	cin>>num;
	cout<<"\nMatriz: \t\t"<<"Numero buscado: "<<num<<"\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<"\t\t\t";
		for(int j=0;j<3;j++){
			if(num==matriz[i][j]){
				cout<<"Fila "<<i<<", Columna "<<j<<"\t";
			}
		}
		cout<<endl;
	}
	return 0;
}