//Ejemplo que muestra la devolucion de multiples valores en una funcion

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void duplicarElementos (vector <int> &vec){

    for(int &valor : vec){

        valor *= 2;

    }

}

int main(){

    vector <int> numeros = {1, 2, 3, 4, 5};

    cout << "Valores originales: ";

    for(int valor : numeros){

        cout << valor << " ";

    }

    cout << "\n";

    duplicarElementos(numeros);

    cout << "Valores despues de llamar a la funcion: ";

    for(int valor : numeros){

        cout << valor << " ";

    }

    cout << "\n";

}
