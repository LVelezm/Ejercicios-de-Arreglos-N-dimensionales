#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
const int TAMANIO=10;
void generarTablero(int tablero[TAMANIO][TAMANIO]){
    for (int i = 0; i < TAMANIO; i++){
        for (int j = 0; j < TAMANIO; j++){
            tablero[i][j]=rand() % 2;
        }
    }
}
void contarMinas(int tablero[TAMANIO][TAMANIO], int tableroConteo[TAMANIO][TAMANIO]) {
    for(int i = 0; i < TAMANIO; i++){
        for(int j = 0; j < TAMANIO; j++){
            int conteo=0;
            for(int k = -1; k <= 1; k++){
                for(int l=-1; l <= 1; l++){
                    int x=i+k;
                    int y=j+l;
                    if(x >= 0 && x < TAMANIO && y >= 0 && y < TAMANIO && (k != 0 || l != 0)){
                        conteo+=tablero[x][y];
                    }
                }
            }
            tableroConteo[i][j]=conteo;
        }
    }
}

void imprimirTableros(int tablero[TAMANIO][TAMANIO], int tableroConteo[TAMANIO][TAMANIO]){
    cout<<"Tablero Original      Tablero contando minas:"<<endl;
    for(int i = 0; i < TAMANIO; i++){
        for(int j = 0; j < TAMANIO; j++){
            cout<<tablero[i][j]<<" ";
        }
        cout<<"  ";
        for(int j = 0; j < TAMANIO; j++){
            cout<<tableroConteo[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    srand(time(0));
    int tablero[TAMANIO][TAMANIO];
    int tableroConteo[TAMANIO][TAMANIO];
    generarTablero(tablero);
    contarMinas(tablero, tableroConteo);
    imprimirTableros(tablero, tableroConteo);
    return 0;
}
