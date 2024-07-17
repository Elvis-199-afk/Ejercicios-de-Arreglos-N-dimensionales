#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void mostrarBosque(int bosque[10][10], const string& titulo) {
    cout << titulo << endl;
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            cout << bosque[i][j] << " ";
        }
        cout << endl;
    }
}

void actualizarBosque(int bosque[10][10], int nuevoBosque[10][10]) {
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (bosque[i][j] == 0) {
                bool arde = false;
                for (int a = -1; a <= 1 && !arde; ++a) {
                    for (int b = -1; b <= 1 && !arde; ++b) {
                        int ni = i + a;
                        int nj = j + b;
                        if (ni >= 0 && ni < 10 && nj >= 0 && nj < 10 && !(a == 0 && b == 0)) {
                            if (bosque[ni][nj] == 1) {
                                arde = true;
                            }
                        }
                    }
                }
                nuevoBosque[i][j] = arde ? 1 : 0;
            } else if (bosque[i][j] == 1) { 
                nuevoBosque[i][j] = 2;
            } else { 
                nuevoBosque[i][j] = 2;
            }
        }
    }
}

int main() {
    int bosque[10][10];
    int nuevoBosque[10][10];
    srand(time(0));
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            bosque[i][j] = rand() % 3 == 0 ? 1 : 0;
        }
    }
    mostrarBosque(bosque, "Estado inicial del bosque:");
    actualizarBosque(bosque, nuevoBosque);
    mostrarBosque(nuevoBosque, "\nEstado del bosque despues de la propagacion del fuego:");
    return 0;
}
