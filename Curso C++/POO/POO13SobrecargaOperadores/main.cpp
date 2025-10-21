//Sobrecargando los operadores

#include <iostream>
#include <string>

using namespace std;

class Empleado{
    private:
        string nombre;
        double sueldo;

    public:
        Empleado(string n, double s):
            nombre(n), sueldo(s){}

        //Sobrecarga de operadores
        Empleado operator + (const Empleado& otro){ //Sobre carga el operador +
            double nuevoSueldo = sueldo + otro.sueldo;

            return Empleado("Nuevo empleado", nuevoSueldo);
        }

        //Sobre carga al operador igual a (==)
        bool operator ==(const Empleado& otro){
            return this -> sueldo == otro.sueldo;
        }

        //Funcion amiga para acceder a los campos encapsulados
        friend ostream& operator << (ostream& salida, const Empleado& e);

        /*void mostrar() const{
            cout << "Empleado: " << nombre << ". Sueldo: " << sueldo << "US$\n";
        }*/
};

ostream& operator << (ostream& salida, const Empleado& e){ //Sobre carga el operador insercion (<<)
    salida << "Empleado: " << e.nombre << ". Sueldo: " << e.sueldo << "US$\n";

    return salida;
}

int main(){
    Empleado emp1("Dorian", 2000);
    Empleado emp2("Diana", 2200);

    Empleado nuevo = emp1 + emp2;

    //nuevo.mostrar();

    cout << nuevo;

    if (emp1 == emp2){

        cout << "El salario de ambos empleados es igual";

    }else{

        cout << "El salario de ambos empleados es diferente";

    }
}
