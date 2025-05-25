/* Uso del bucle For
   1. Imprimir en consola 10 veces un saludo.
   2. Imprimir en consola el contenido de un Array
   3. Imprimir en consola el contenido de un Array bidimensional
*/
#include <iostream>

using namespace std;

int main(){

    int edades1 [] = {25, 35, 80, 27, 50};
    int edades2 [3][5] = {
        {25, 35, 80, 27, 50},
        {17, 19, 81, 52, 93},
        {7, 9, 18, 23, 19}
    };

    cout << "1. Imprime 10 veces un saludo." << endl << endl;
    for(int i = 0; i < 10; i++){

        cout << (i+1) << ". " << "Hola!!!, como estas?" << endl;

    }

    cout << endl;
    cout << "_______________________________________" << endl;
    cout << "2. Imprimiendo el contenido de un Array" << endl << endl;

    for(int j = 0; j < 5; j++){

        cout << "Edad: " << edades1 [j] << endl;

    }

    cout << endl;
    cout << "_____________________________________________________" << endl;
    cout << "3. Imprimiendo el contenido de un Array bidimensional" << endl << endl;

    for(int k = 0; k < 3; k++){
        for(int l = 0; l < 5; l++){

            cout << edades2 [k][l] << " ";

        }

        cout << endl;
    }

}
