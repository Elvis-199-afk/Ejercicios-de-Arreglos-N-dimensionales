#include <iostream>
#include <cstdlib>
#include <ctime>
#define max 10

using namespace std;

void inicializar(int tablero[max][max]) {
    srand(time(0));
    for (int i = 0; i < max; i++) {
        for (int j = 0; j < max; j++) {
            tablero[i][j] = rand() % 2;
        }
    }
}

int contvecinosvivos(int tablero[max][max], int x, int y) {
    int cont = 0;
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            if (i == 0 && j == 0) continue;
            int ni = x + i, nj = y + j;
            if (ni >= 0 && ni < max && nj >= 0 && nj < max) {
                cont += tablero[ni][nj];
            }
        }
    }
    return cont;
}

void sigGeneracion(int actual[max][max], int sig[max][max]) {
    for (int i = 0; i < max; i++) {
        for (int j = 0; j < max; j++) {
            int vecinosvivos = contvecinosvivos(actual, i, j);
            if (actual[i][j] == 1) {
                if (vecinosvivos < 2 || vecinosvivos > 3) {
                    sig[i][j] = 0;
                } else {
                    sig[i][j] = 1;
                }
            } else {
                if (vecinosvivos == 3) {
                    sig[i][j] = 1;
                } else {
                    sig[i][j] = 0;
                }
            }
        }
    }
}

void imprimirtableros(const int tablero1[max][max], const int tablero2[max][max]) {
    for (int i = 0; i < max; i++) {
        for (int j = 0; j < max; j++) {
            cout << tablero1[i][j] << " ";
        }
        cout << "\t\t";
        for (int j = 0; j < max; j++) {
            cout << tablero2[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int actual[max][max];
    int sig[max][max];

    inicializar(actual);
    sigGeneracion(actual, sig);

    cout << "Tablero Inicial:\t\tSiguiente Generacion:\n";
    imprimirtableros(actual, sig);

    return 0;
}