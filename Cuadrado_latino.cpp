#include <iostream>
using namespace std;

void imprimirCuadradoLatino(int n) {
    int matriz[n][n];
    for (int i = 0; i < n; i++) {
        matriz[0][i] = i + 1;
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = matriz[i-1][(j+n-1)%n];
        }
    }
    cout << "Cuadrado latino de orden " << n << ":" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cout << "Introduzca el orden del cuadrado latino (N): ";
    cin >> n;
    imprimirCuadradoLatino(n);
    return 0;
}
