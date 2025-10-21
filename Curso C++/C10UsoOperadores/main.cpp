//Trabajando con los operadore

#include <iostream>

using namespace std;

int main(){

    int a = 5, b = 10, z = ++a, w = b++;

    cout << "Los valores iniciales de a y b son: " << a << " y " << b << " respectivamente" << endl << endl;

    a += b; //Se le asigna a la variable "a" la suma a + b.

    cout << "El valor de a despues de usar el operador += es: " << a << endl;
    cout << "El valor de z despues de usar el operador ++a es: " << z << endl;
    cout << "El valor de w despues de usar el operador b++ es: " << w << endl;


}
