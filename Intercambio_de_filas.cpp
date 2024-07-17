#include <iostream>
using namespace std;

int main(){
    int matriz[4][4];
    int fila1, fila2;

    cout << "Ingrese la matriz 4x4:" << endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout << "Ingrese el valor para la matriz[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << "Ingrese las filas a intercambiar (0-3):" << endl;
    cout << "Fila 1: ";
    cin >> fila1;
    cout << "Fila 2: ";
    cin >> fila2;

    int matrizOriginal[4][4];
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            matrizOriginal[i][j] = matriz[i][j];
        }
    }

    for(int j=0; j<4; j++){
        int temp = matriz[fila1][j];
        matriz[fila1][j] = matriz[fila2][j];
        matriz[fila2][j] = temp;
    }

    cout << "Matriz original\t\tMatriz resultante" << endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++) cout << matrizOriginal[i][j] << " ";
        cout << "\t\t";
        for(int j=0; j<4; j++) cout << matriz[i][j] << " ";
        cout << endl;
    }

    return 0;
}