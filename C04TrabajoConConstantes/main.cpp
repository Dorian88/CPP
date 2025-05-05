//Se reutilizará el código del trabajo con variables

#include <iostream>

using namespace std;

int main(){

    const string nombre = "Dorian"; //Al añadir al principio la palabra const, la variable se convierte en una constante
    int edad {21};
    double salario;

    cout << "Introduce el salario del empleado: ";
    cin >> salario;

    cout << "-----------------------------------------------------------------------------------" << endl;

    cout << "Datos del empleado:" << endl;
    cout << "Nombre: " << nombre <<". Edad: " << edad << ". Salario: " << salario << "." << endl;
}
