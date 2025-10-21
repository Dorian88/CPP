//Ejemplo usando Static

#include <iostream>

using namespace std;

class Empleado{
    private:
        string nombre;
        int id;
        inline static int siguienteID = 1;
        inline static int totalEmpleados = 0;

    public:
        Empleado(string _nombre){

            nombre = _nombre;
            id = siguienteID++;
            totalEmpleados++;

        }

        ~Empleado(){

            totalEmpleados--;

        }

        void mostrarInfo(){

            cout << "ID del empleado: " << id << " Nombre: " << nombre << endl;

        }

        static int obtenerSiguienteId(){

            return siguienteID;

        }

        static int contarEmpleados(){

            return totalEmpleados;

        }
};

//int Empleado::siguienteID = 1;

int main(){

    Empleado e1("Dorian");
    Empleado e2("Diana");
    Empleado e3("Alexander");
    Empleado e4("Luisa");
    {
        Empleado e5("Camila");
    }

    e1.mostrarInfo();
    e2.mostrarInfo();
    e3.mostrarInfo();
    e4.mostrarInfo();

    cout << endl << "El siguiente ID disponible es: " << Empleado::obtenerSiguienteId() << endl;
    cout << endl << "Total de empleados: " << Empleado::contarEmpleados() << endl;
    cout << endl << "Se elimina un quinto empleado " << endl;

}
