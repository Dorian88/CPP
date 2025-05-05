//Ejemplos de Array bidimensional

#include <iostream>

using namespace std;

int main(){

    //Una manera de declarar e inicializar un Array bidimensional
    int miMatriz[4][5] = {15, 25, 8, -7, 92, 77, 12, 11, 7, 44, 56, 59, 43, 78, 12, 43, 95, 12, 87, 33};
    int miMatriz1[4][5];

    //Acceder a un dato del array
    cout << miMatriz[0][2];
    cout << endl << endl;

    //Sobreescribir una posicion
    miMatriz[0][2] = 125;
    cout << miMatriz[0][2];
    cout << endl << endl;

    //Usando el bucle for
    for(int fila = 0; fila < 4; fila++){
        for(int col = 0; col < 5; col++){
            cin >> miMatriz1[fila][col];
        }
    }

    cout << "Visualizamos los valores almacenados en el Array" << endl;

    for(int fila = 0; fila < 4; fila++){
        for(int col = 0; col < 5; col++){
            cout << miMatriz1[fila][col];
        }
        cout << endl;
    }
}
