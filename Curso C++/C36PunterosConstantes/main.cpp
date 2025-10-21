//Trabajando con punteros y constantes

#include <iostream>

using namespace std;

int main(){

    //Punteros a constantes
    const int edad = 10;
    const int salario = 2500;
    const int *puntero = &edad;
    const int edad2 = 20;
    int edad1 = 15;
    int const *miPuntero = &edad1;
//    const int const *ptr = &edad2;

    cout << *puntero << endl;

    puntero = &salario;

    cout << *puntero << endl;
    cout << "\n**************************************" << endl;

    //Punteros constantes
    /*cout << "El valor de la variable a traves del puntero"<< *miPuntero << endl;

    cout << "Modificando el valor de la variable a traves del puntero:" << endl;

    *miPuntero = 20;
    cout << "El nuevo valor de la variable es: " << *miPuntero << endl;*/

    //Punteros constantes que apuntan a constantes
//    cout << *ptr;



}
