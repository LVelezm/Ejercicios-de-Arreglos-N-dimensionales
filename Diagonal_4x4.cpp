#include <iostream>
using namespace std;
int main(){
    int matriz[4][4];
    cout<<"Ingrese los valores para la matriz:"<<endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<"Ingrese el valor para la matriz["<<i<<"]["<<j<<"]: ";
            cin>>matriz[i][j];
        }
    }

    cout<<"Matriz ingresada:"<<endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
		cout<<matriz[i][j]<<" ";
		} 
        cout<<endl;
    }

    int sumaDiagonal1=0; 
	int sumaDiagonal2=0;
    for(int i=0; i<4; i++){
        sumaDiagonal1+=matriz[i][i];
        sumaDiagonal2+=matriz[i][3-i];
    }

    cout<<"Suma de la diagonal principal: "<<sumaDiagonal1<<endl;
    cout<<"Suma de la diagonal secundaria: "<<sumaDiagonal2<<endl;
    cout<<"Suma total de las diagonales: "<<sumaDiagonal1+sumaDiagonal2<<endl;

    return 0;
}
