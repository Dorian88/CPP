//Usuando el bucle do while

#include <iostream>

using namespace std;

int main(){

    int opcion;

    do{

        cout << "Menu de opciones: \n";
        cout << "Opcion 1: \n";
        cout << "Opcion 2: \n";
        cout << "Salir: \n";
        cin >> opcion;

        if(opcion != 3){

            cout << "Haz elegido la opcion " << opcion << ".\n\n";

        }

    }while(opcion != 3);

    cout << "Haz elegido salir. \n";

}
