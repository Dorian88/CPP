//Crear una interfaz grafica

#include <iostream>

using namespace std;

void crearVentana(int ancho = 800, int alto = 600, string titulo = "Mi Ventana", bool completa = false){

    cout << "Creando ventana: " << titulo << "\n"
             << "Ancho: " << ancho << "\n"
             << "Alto: " << alto << "\n"
             << "Pantalla completa: " << (completa ? "Si" : "No") << "\n\n";

}

int main(){

    crearVentana();

    cout <<"***************************" << endl;
    crearVentana(350, 125);

    cout <<"***************************" << endl;
    crearVentana(900, 750, "Ventana Menu");

    cout <<"***************************" << endl;
    crearVentana(950, 800, "Ventana Principal", true);

}
