#include <iostream>
using namespace std;

int main(){
    int matriz[4][4];
    int maximo, minimo, filaMax, columnaMax, filaMin, columnaMin;

    cout << "Ingrese la matriz 4x4:" << endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout << "Ingrese el valor para la matriz[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    cout << "Matriz 4x4:" << endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    maximo = matriz[0][0];
    minimo = matriz[0][0];
    filaMax = 0;
    columnaMax = 0;
    filaMin = 0;
    columnaMin = 0;

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(matriz[i][j] > maximo){
                maximo = matriz[i][j];
                filaMax = i;
                columnaMax = j;
            }
            if(matriz[i][j] < minimo){
                minimo = matriz[i][j];
                filaMin = i;
                columnaMin = j;
            }
        }
    }

    cout << "Valor maximo: " << maximo << " en la fila " << filaMax << " y columna " << columnaMax << endl;
    cout << "Valor minimo: " << minimo << " en la fila " << filaMin << " y columna " << columnaMin << endl;

    return 0;
}
