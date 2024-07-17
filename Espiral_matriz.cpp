#include <iostream>
using namespace std;

void imprimirMatriz(int matriz[5][5]) {
    cout << "Matriz original:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void imprimirEspiral(int matriz[5][5]) {
    int fila_inicio = 0, fila_fin = 4, col_inicio = 0, col_fin = 4;
    cout << "Recorrido en espiral: ";
    while (fila_inicio <= fila_fin && col_inicio <= col_fin) {
        for (int i = col_inicio; i <= col_fin; i++) {
            cout << matriz[fila_inicio][i] << " ";
        }
        fila_inicio++;
        for (int i = fila_inicio; i <= fila_fin; i++) {
            cout << matriz[i][col_fin] << " ";
        }
        col_fin--;
        if (fila_inicio <= fila_fin) {
            for (int i = col_fin; i >= col_inicio; i--) {
                cout << matriz[fila_fin][i] << " ";
            }
            fila_fin--;
        }
        if (col_inicio <= col_fin) {
            for (int i = fila_fin; i >= fila_inicio; i--) {
                cout << matriz[i][col_inicio] << " ";
            }
            col_inicio++;
        }
    }
    cout << endl;
}

int main() {
    int matriz[5][5];

    cout << "Introduzca los datos de la matriz (5x5):" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Matriz[" << i << "][" << j << "] = ";
            cin >> matriz[i][j];
        }
    }

    imprimirMatriz(matriz);
    imprimirEspiral(matriz);

    return 0;
}
