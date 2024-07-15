#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int matriz[6][6] = {{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18},{19,20,21,22,23,24},{25,26,27,28,29,30},{31,32,33,34,35,36}};
	int matrizReflejada[6][6], aux=0;;
	for(int i=0;i<6;i++){
		aux=0;
		for(int j=0;j<6;j++){
			matrizReflejada[i][j]=matriz[i][aux+5];
			aux--;
			}
	}
	
	cout<<internal<<setw(10)<<"Matriz:"<<internal<<"\t\t\t\t  Matriz reflejada horizontalmente:\n";
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			cout<<internal<<setw(4)<<matriz[i][j];
		}
		cout<<"\t\t";
		for(int j=0;j<6;j++){
			cout<<internal<<setw(4)<<matrizReflejada[i][j];
		}
		cout<<endl;
	}
	
	return 0;
}