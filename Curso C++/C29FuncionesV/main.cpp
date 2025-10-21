//Paso de parametros por defecto

#include <iostream>

using namespace std;

void mostrarMensaje1(string msg, int veces = 1){

    for (int i = 0; i < veces; i++){

        cout << msg << endl;

    }
}

void mostrarMensaje2(string msg = "Welcome to the black parade", int veces = 1){

    for (int i = 0; i < veces; i++){

        cout << msg << endl;

    }
}

int main(){

    mostrarMensaje1("Somewhere I belong");

    cout << "*****************************" << "\n";

    mostrarMensaje1("Wait and bleed", 7);

    cout << "*****************************" << "\n";

    mostrarMensaje2();

    cout << "*****************************" << "\n";

    mostrarMensaje2("Goodbye blue sky");

    cout << "*****************************" << "\n";

    mostrarMensaje2("Seek and destroy", 5);


}
