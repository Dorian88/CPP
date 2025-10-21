//Ejemplos usando el This

#include <iostream>

using namespace std;

class CuentaBancaria{

    private:
        double saldo;

    public:
        CuentaBancaria(): saldo(0.0){}
        CuentaBancaria(double saldo): saldo(saldo){}

        void setSaldo(double saldo){

            this -> saldo = saldo;

        }

        CuentaBancaria& set1Saldo(double saldo){

            this -> saldo = saldo;
            return *this;

        }

        double getSaldo(){

            return saldo;

        }

        void compararCuentas(const CuentaBancaria &otra){

            if(this == &otra){

                cout << "Son la misma cuenta." << endl;

            }else{

                cout << "Las cuentas son diferentes." << endl;

            }

        }

        void mostrarSaldo(){

            cout << "Saldo es: " << saldo << endl;

        }

};
int main(){

    cout << "Ejemplo 1: Cuenta bancaria usando this." <<endl;

    CuentaBancaria cuenta1, cuenta2;
    CuentaBancaria cuenta(1000);
    cuenta1.setSaldo(15000);
    cout << "El saldo de su cuenta es: " << cuenta1.getSaldo() << endl;
    cout << "*******************************" <<endl<<endl;
    cout << "Ejemplo 2: Comparando cuentas usando this." <<endl;
    cuenta1.compararCuentas(cuenta1);
    cuenta1.compararCuentas(cuenta2);
    cout << "***************************" <<endl<<endl;
    cout << "Ejemplo 3 usando this." <<endl;
    cuenta.set1Saldo(2000).mostrarSaldo();

}
