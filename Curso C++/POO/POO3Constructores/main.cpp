//Uso de constructores por defecto y sobrecarga

#include <iostream>

using namespace std;

//Clase con constructor por defecto
class Persona{

    public: Persona(){

        cout << "Hola. Soy el constructor por defecto y he sido llamado" << endl;

    }

};

//Clase con sobrecarga de constructores
class Rectangulo{

    private:
        int ancho, alto;
        string nombre;
    public:
        Rectangulo(string nom){

            ancho = 10;
            alto = 5;
            nombre = nom;

        }

        Rectangulo(int medida, string nom){

            ancho = medida;
            alto = 4;
            nombre = nom;

        }

        Rectangulo(int an, int al, string nom){

            ancho = an;
            alto = al;
            nombre = nom;

        }

        //Destructor
        ~Rectangulo(){

            cout << "Destructor invocado para objeto: "<< nombre << endl;

        }

};

int main(){

    Persona p1;
    Rectangulo r1("r1"), r2(12, "r2"), r3(17, 9, "r3");


}
