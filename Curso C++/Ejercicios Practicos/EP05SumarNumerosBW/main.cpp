//Sumar numeros introducidos por consola hasta que se ingrese un cero

#include <iostream>

using namespace std;

int main(){

    int num, suma = 0;

    cout << "Introduce numeros. Ingrese 0 para terminar: ";
    cin >> num;

    while (num != 0){

        suma += num;

        cout << "Introduce numeros. Ingrese 0 para terminar: ";
        cin >> num;

    }

    cout << endl << "La suma total es: " << suma << endl;

}
