#include <iostream>
using namespace std;

void rotarMatriz(int matriz[4][4], int rotada[4][4]) {
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            rotada[j][3-i] = matriz[i][j];
        }
    }
}
int main(){
    int matriz[4][4];
    int rotada[4][4];
    cout << "Ingrese la matriz 4x4:" << endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout << "Ingrese el valor para la matriz[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    rotarMatriz(matriz, rotada);
    cout << "Matriz original:        Matriz rotada 90 grados:" << endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout << matriz[i][j] << " ";
        }
        cout << "\t\t";
        for(int j=0; j<4; j++){
            cout << rotada[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
