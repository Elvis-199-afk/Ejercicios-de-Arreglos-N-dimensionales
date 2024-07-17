#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    int matriz[10][10];
    int ubicacion[10][10];
    srand(time(0));
    cout<<"En la matriz los 1 son las minas:\t"<<"La cantidad de minas que hay alrededor, sin contar la propia celda: "<<endl;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++) {
            matriz[i][j] = rand() % 2;
            cout << matriz[i][j] << " ";
        }
        cout << "\t\t\t";
        
        for (int j = 0; j < 10; ++j) {
            int cont = 0;
            for (int a = -1; a <= 1; ++a) {
                for (int b = -1; b <= 1; ++b) {
                    int ni = i + a;
                    int nj = j + b;
                    if (ni >= 0 && ni < 10 && nj >= 0 && nj < 10 && !(a == 0 && b == 0)) {
                        if (matriz[ni][nj] == 1) {
                            cont++;
                        }
                    }
                }
            }
            ubicacion[i][j] = cont;
            cout << ubicacion[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
