//Ejemplo de constructor initialization list

#include <iostream>
#include <chrono> //Incluye la biblioteca chrono

using namespace std;

class Persona{

    private:
        string nombre;
        int edad;

    public:
        /*Persona(string nom, int ed){

            nombre = nom;
            edad = ed;
            cout << "Constructor llamado" << endl;

        }*/

        //Constructor initialization list
        Persona(string nom, int ed):nombre(nom), edad(ed){

            cout << "Constructor llamado" << endl;

        }

        void mostrarDatos(){

            cout << "Nombre: " << nombre << ", Edad: " << edad << " anios." << endl;

        }
};

int main(){

    auto comienzo = chrono::high_resolution_clock::now();
    chrono::duration<double> lapso;

    for(int i = 0; i < 10000; i++){

        Persona p1("Dorian", 41);

    }

    //p1.mostrarDatos();

    auto fin = chrono::high_resolution_clock::now();

    lapso = fin - comienzo;

    cout << "Tiempo de ejecucion: " << lapso.count() << " segundos" << endl;

}
