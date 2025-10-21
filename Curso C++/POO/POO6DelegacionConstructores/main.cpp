//Ejemplo que muestra como delegar constructores

#include <iostream>

using namespace std;

class CuentaBancaria{

    public:
        string titular;
        double saldo;

    //Delegando constructores
    /*CuentaBancaria(string t): CuentaBancaria(t, 0.0){

        //cout << "Cuenta creada para el cliente " << titular << " con un saldo de " << saldo << endl;

    }

    CuentaBancaria(string t, double s): titular(t), saldo(s){

        cout << "Cuenta creada para el cliente " << titular << " con un saldo de " << saldo << endl;

    }*/

    //Paramaetros opcionales
    CuentaBancaria(string t, double s = 0.0): titular(t), saldo(s){

        cout << "Cuenta creada para el cliente " << titular << " con un saldo de " << saldo << endl;

    }

};

class Figura{

    public:
        int base, altura, area;

    Figura(int b, int h): base(b), altura(h), area(b*h){

        cout << "La figura tiene una base de " << base << " una altura de " << altura << " y un area de " << area << endl;

    }

    Figura(int lado): Figura(lado, lado){}

};

int main(){

    CuentaBancaria cuenta1 ("Dorian");
    CuentaBancaria cuenta2 ("Alexander", 25350.253);
    cout << endl;
    Figura rectangulo (10, 5);
    Figura cuadrado (7);


}
