//Muestra de las funciones inline y auto

#include <iostream>

using namespace std;

inline int sumar(int a, int b){

    return a + b;

}

auto resta (int c, int d) -> int{

    return c - d;

}

int main(){

    int x = 8, y = 23;
    int resultado1, resultado2;

    resultado1 = sumar(x, y);
    resultado2 = resta(y, x);

    cout << "El resultado de la suma de " << x << " y " << y << " es: "<< resultado1 << endl;
    cout << "El resultado de la resta de " << y << " y " << x << " es: "<< resultado2 << endl;

}
