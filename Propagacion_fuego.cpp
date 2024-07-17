#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
const int TAMANO = 10;
void imprimirBosque(int bosque[TAMANO][TAMANO]) {
    for (int i = 0; i < TAMANO; i++) {
        for (int j = 0; j < TAMANO; j++) {
            cout << bosque[i][j] << " ";
        }
        cout << endl;
    }
}

void actualizarBosque(int bosque[TAMANO][TAMANO], int nuevoBosque[TAMANO][TAMANO]) {
    for (int i = 0; i < TAMANO; i++) {
        for (int j = 0; j < TAMANO; j++) {
            if (bosque[i][j] == 0) { 
                bool tieneVecinoQuemando = false;
                for (int k = -1; k <= 1; k++) {
                    for (int l = -1; l <= 1; l++) {
                        int ii = i + k;
                        int jj = j + l;
                        if (ii >= 0 && ii < TAMANO && jj >= 0 && jj < TAMANO) {
                            if (bosque[ii][jj] == 1) {
                                tieneVecinoQuemando = true;
                                break;
                            }
                        }
                    }
                    if (tieneVecinoQuemando) break;
                }
                if (tieneVecinoQuemando) {
                    nuevoBosque[i][j] = 1; 
                } else {
                    nuevoBosque[i][j] = 0; 
                }
            } else if (bosque[i][j] == 1) { 
                nuevoBosque[i][j] = 2; 
            } else { 
                nuevoBosque[i][j] = 2; 
            }
        }
    }
}

int main() {
    srand(time(0)); 

    int bosque[TAMANO][TAMANO];
    int nuevoBosque[TAMANO][TAMANO];
    for (int i = 0; i < TAMANO; i++) {
        for (int j = 0; j < TAMANO; j++) {
            bosque[i][j] = rand() % 3; 
            nuevoBosque[i][j] = bosque[i][j];
        }
    }
    actualizarBosque(bosque, nuevoBosque);

    cout << "Bosque inicial:              Bosque despues de la propagacion del fuego:" << endl;
    for (int i = 0; i < TAMANO; i++) {
        for (int j = 0; j < TAMANO; j++) {
            cout << bosque[i][j] << " ";
        }
        cout << "         ";
        for (int j = 0; j < TAMANO; j++) {
            cout << nuevoBosque[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
