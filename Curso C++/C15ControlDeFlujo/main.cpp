//Uso del Switch Case

#include <iostream>

using namespace std;

int main(){

    int opcion, a, b, res;

    cout << "Menu de opciones:" << endl << endl;
    cout << "1. Mostrar mensaje." << endl;
    cout << "2. Calcular suma." << endl;
    cout << "3. Salir del programa." << endl << endl;
    cout << "Introduce la opcion deseada (1, 2 o 3): ";
    cin >> opcion;

    switch(opcion){

        case 1:
            cout << "Hola gente." << endl;
            break;

        case 2:
            cout << "Introduce dos numeros enteros: ";
            cin >> a >> b;

            res = a + b;

            cout << "La suma de " << a << " y " << b << " es igual a: " << res <<endl;
            break;

        case 3:
            cout << "Saliendo del programa... "<< endl;
            break;

        default:
            cout << "Opcion no valida "<< endl;

    }

    return 0;

}
