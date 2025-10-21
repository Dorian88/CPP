//Ejemplo usando el const

#include <iostream>

using namespace std;

class Empleado{

    private:
        const string nombre, apellido;
        double salario;

    public:
        Empleado(string n, string a, double s):nombre(n), apellido(a), salario(s){}

        string getNombre() const{

            return nombre;

        }

        string getApellido() const{

            return apellido;

        }

        double getSalario () const{

            return salario;

        }

        void setSalario(double nuevoSalario){

            if(nuevoSalario >= 0){

                salario = nuevoSalario;

            }else{

                cout << "ERROR: el salario no puede ser negativo." << endl;
            }

        }

        void mostrarInfo() const{

            cout <<"El empleado " << nombre << " " << apellido << endl;
            cout <<"Tiene un salario de $" << salario << endl;
        }

};

int main(){

    Empleado emp("Dorian", "Jaramillo", 3000);
    const Empleado emp2("Diana", "Betancur", 4500);

    emp.mostrarInfo();

    cout << "\nModificando el salario..." << endl;
    emp.setSalario(3500);
    emp.mostrarInfo();
    cout << endl;
    emp2.mostrarInfo();

}
