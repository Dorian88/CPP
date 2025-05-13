#include <iostream>

using namespace std;

int main(){

    int a = 3;
    float b = 4.0f;
    double c = 8.0;
    auto resultado = b + c + a; //Deduce el tipo de variable por el valor que almacena.

    cout << "El tipo de dato de resultados es: " << typeid(resultado).name() << endl << endl; // typeid(resultado).name() muestra el tipo de dato.

    int d = 10, f = 30;
    double e = 12;
    double media = (d + e + f)/3;

    cout << "La media de los 3 valores es: " << media << endl;
    cout << "El tipo de dato de media es: " << typeid(media).name() << endl << endl;

}
