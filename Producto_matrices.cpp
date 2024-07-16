#include <iostream>
using namespace std;
int main(){
	int matriz1[3][3];
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"Ingrese el valor para la matriz 1 ["<<i<<"]["<<j<<"]: ";
			cin>>matriz1[i][j];
		}
	}
	cout<<endl;
	int matriz2[3][3];
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"Ingrese el valor para la matriz 2 ["<<i<<"]["<<j<<"]: ";
			cin>>matriz2[i][j];
		}
	}
	int producto[3][3];
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			producto[i][j]=0;
			for(int k=0; k<3; k++){
				producto[i][j]=producto[i][j]+matriz1[i][k]*matriz2[k][j];
			}
		}
	}
	cout<<"Matriz 1	Matriz 2	Resultado del producto"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << matriz1[i][j] << " ";
        }
        cout << "\t\t";
        for(int j=0; j<3; j++){
            cout << matriz2[i][j] << " ";
        }
        cout << "\t\t";
        for(int j=0; j<3; j++){
            cout << producto[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}