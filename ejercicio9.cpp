#include <iostream>
using namespace std;

int main() {
	int n, arr[10];
	cout<<"Ingrese el orden de la matriz: ";
	cin>>n;
	for(int i=0;i<n;i++){
		arr[i]=i+1;
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[j]<<" ";
		}
			cout<<endl;
		int aux=arr[n-1];
		for(int c=n-1;c>0;c--){
			arr[c]=arr[c-1];
		}
		arr[0]=aux;
	}

    return 0;
}
