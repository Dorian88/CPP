//Usando funciones como prototipo

#include <iostream>
#include <cmath>

using namespace std;

double potencia(double base, double exponente);

int main(){

    double base, exponente;

    cout << "Ingresa un numero cualquiera: ";
    cin >> base;
    cout << "Ingresa otro numero cualquiera: ";
    cin >> exponente;


    cout << "\n" << "El resultado es: " << potencia(base, exponente) << "\n";

}

double potencia(double base, double exponente){

    return pow(base, exponente);

}
