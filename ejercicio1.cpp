#include<iostream>
using namespace std;

int main(){
	int matrizA[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int matrizB[3][3]={{9,8,7},{6,5,4},{3,2,1}};
	int matrizC[3][3]={{0,0,0},{0,0,0},{0,0,0}};
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			for(int c=0;c<3;c++){
				matrizC[i][j]+=matrizA[i][c]*matrizB[c][j];
			}
		}
	}
	cout<<"Matriz A: \t"<<"Matriz B: \t"<<"Resultado: \t\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matrizA[i][j]<<" ";
		}
		cout<<"\t\t";
		for(int j=0;j<3;j++){
			cout<<matrizB[i][j]<<" ";
		}
		cout<<"\t\t";
		for(int j=0;j<3;j++){
			cout<<matrizC[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}