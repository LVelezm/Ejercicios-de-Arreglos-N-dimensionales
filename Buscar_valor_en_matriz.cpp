#include <iostream>
using namespace std;
int main(){
    int matriz[3][3];
    cout<<"Ingrese los valores para la matriz:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Ingrese el valor para la matriz["<<i<<"]["<<j<<"]: ";
            cin>>matriz[i][j];
        }
    }
    cout<<"Matriz ingresada:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
    int valorBuscado;
    cout<<"Ingrese el valor que desea buscar: ";
    cin>>valorBuscado;

    cout<<"Matriz\tPosiciones"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<"\t";
        bool encontrado=false;
        for(int j=0;j<3;j++){
            if(matriz[i][j]==valorBuscado){
                cout<<"Fila "<<i<<", Columna "<<j<<" ";
                encontrado=true;
            }
        }
        if(!encontrado){
            cout<<"No encontrado";
        }
        cout<<endl;
    }

    return 0;
}
