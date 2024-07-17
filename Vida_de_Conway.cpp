#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int TAMANO = 10;

void imprimirTablero(int tablero[][TAMANO]) {
    for (int i = 0; i < TAMANO; i++) {
        for (int j = 0; j < TAMANO; j++) {
            cout << tablero[i][j] << " ";
        }
        cout << endl;
    }
}

int contarVecinosVivos(int tablero[][TAMANO], int i, int j) {
    int count = 0;
    for (int x = -1; x <= 1; x++) {
        for (int y = -1; y <= 1; y++) {
            int ii = i + x;
            int jj = j + y;
            if (ii >= 0 && ii < TAMANO && jj >= 0 && jj < TAMANO) {
                if (tablero[ii][jj] == 1) {
                    count++;
                }
            }
        }
    }
    if (tablero[i][j] == 1) {
        count--;
    }
    return count;
}

void actualizarTablero(int tablero[][TAMANO], int nuevoTablero[][TAMANO]) {
    for (int i = 0; i < TAMANO; i++) {
        for (int j = 0; j < TAMANO; j++) {
            int vecinosVivos = contarVecinosVivos(tablero, i, j);
            if (tablero[i][j] == 1) {
                if (vecinosVivos < 2) {
                    nuevoTablero[i][j] = 0; 
                } else if (vecinosVivos > 3) {
                    nuevoTablero[i][j] = 0; 
                } else {
                    nuevoTablero[i][j] = 1; 
                }
            } else {
                if (vecinosVivos == 3) {
                    nuevoTablero[i][j] = 1; 
                } else {
                    nuevoTablero[i][j] = 0;
                }
            }
        }
    }
}

int main() {
    srand(time(0));

    int tablero[TAMANO][TAMANO];
    int nuevoTablero[TAMANO][TAMANO];
    for (int i = 0; i < TAMANO; i++) {
        for (int j = 0; j < TAMANO; j++) {
            tablero[i][j] = rand() % 2;
        }
    }

    cout << "Tablero inicial:             Tablero en la segunda generacion:" << endl;
    for (int i = 0; i < TAMANO; i++) {
        for (int j = 0; j < TAMANO; j++) {
            cout << tablero[i][j] << " ";
        }
        cout << "         ";
        for (int j = 0; j < TAMANO; j++) {
            nuevoTablero[i][j] = tablero[i][j]; 
        }
        actualizarTablero(tablero, nuevoTablero);
        for (int j = 0; j < TAMANO; j++) {
            cout << nuevoTablero[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
