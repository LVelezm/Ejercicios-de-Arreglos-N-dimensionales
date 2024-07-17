#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int matriz[6][6];

    cout << "Ingrese la matriz 6x6:" << endl;
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            cout << "Ingrese el valor para la matriz[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << "Matriz original" << "\t\t\t" << " Matriz reflejada" << endl;
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            cout << setw(2) << matriz[i][j] << " ";
        }
        cout << "\t\t";
        for(int j=0; j<6; j++){
            cout << setw(2) << matriz[i][5-j] << " ";
        }
        cout << endl;
    }

    return 0;
}