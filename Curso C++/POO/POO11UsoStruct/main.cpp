//Ejemplo usando struct
#include <iostream>

using namespace std;

struct Persona{

    string nombre;
    int edad;

    string getDatos(){

        return "El nombre es: " + nombre + " y la edad es de: " + to_string(edad) + "\n";

    }

};
int main(){

    Persona p;

    p.nombre = "Dorian";
    p.edad = 41;

    cout << p.getDatos();

}
