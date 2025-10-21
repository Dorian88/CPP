//Manejo de memoria con punteros

#include <iostream>

using namespace std;

int main(){

    int *intPtr {nullptr};
    int *miPuntero = new int;

    intPtr = new int; //Reserva un espacio de memoria de un entero en el Heap.
    *miPuntero = 10;

    cout << intPtr << endl; //Imprime la direccion en el heap del entero
    cout << &intPtr << endl; //Imprime la direccion en el stack del puntero

    cout << "******************************" << endl;
    cout << "El valor antes de borrar " << *miPuntero << endl;

    delete miPuntero; //Liberando memoria.
    miPuntero = nullptr; //Libera la memoria a la que apuntaba el puntero

    cout << miPuntero << endl;

}
