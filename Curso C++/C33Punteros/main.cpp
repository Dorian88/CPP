//Ejemplo de punteros

#include <iostream>

using namespace std;

int var1 = 15;

void miFuncion(int *var1){

    *var1 = *var1 + 10;

}

int main(){

    int var = 10;
    int *ptr; //Puntero

    ptr = &var;

    cout << var << endl; //Imprime el valor de la variable
    cout << &var << endl; //Imprime la direccion en memoria de la variable
    cout << ptr << endl; //Imprime lo que hay en el puntero
    cout << *ptr << endl; //Imprime el valor que hay en el puntero

    *ptr = 55;

    cout << var << endl; //Modifico el valor de la variable desde su puntero

    cout << "\n****************************************************" << endl;

    miFuncion(&var1);

    cout << var1 << endl;
}
