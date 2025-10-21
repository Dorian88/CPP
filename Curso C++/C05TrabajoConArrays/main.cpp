//Utilizacion de Arrays

#include <iostream>

using namespace std;

int main(){

    //Primera forma de declarar un Array
    int matrix[] {15, 20, 25};

    cout << matrix[1] << endl;
    cout << matrix[2] << endl;
    cout << endl;

    //Segunda manera de declarar Arrays
    int edades[10] {15, 20, 25};

    cout << edades[2] << endl;
    cout << edades[7] << endl;
    cout << endl;

    //Usando constantes
    const int personas{10};

    int edades1[personas] {15, 20, 25};

    cout << edades1[2] << endl;
    cout << edades1[7] << endl;
    cout << endl;

    //Asignando un valor a un array en una posicion cualquiera
    edades[6] = 45;

    cout << edades[6] << endl;
    cout << endl;

    //Sobre escribir un valor en el Array
    matrix [1] = 35;

    cout << matrix[1] << endl;
    cout << endl;

    cin >> edades1[7];

    cout << "La edad es de " << edades1[7] << " agnos"<< endl;
    cout << endl;
}
