//El diamond problem se presenta en las herencias multiples

#include <iostream>

using namespace std;

class Animal{
    public:
        int edad;

        Animal(): edad(0){}

        void respirar(){
            cout << "El animal esta respirando" << endl;
        }
};

class Mamifero : virtual public Animal{
    public:
        void amamantar(){
            cout << "Soy un mamifero y amamanto a mis crias" << endl;
        }
};

class Volador : virtual public Animal{
    public:
        void volar(){
            cout << "Soy un animal volador y puedo volar" << endl;
        }
};

class Murcielago : public Mamifero, public Volador{
    public:
        void dormir(){
            cout << "El murcielago duerme cabeza abajo" << endl;
        }
};

int main(){

    Murcielago miMurcielago;

    miMurcielago.dormir();
    miMurcielago.volar();
    miMurcielago.amamantar();
    //miMurcielago.respirar(); Aquí se presenta el diamond problem (No sabe a cual funcion se refiere). Lo mismo pasa con las variables

    //Una forma de solucionar
    //miMurcielago.Mamifero::respirar();
    //miMurcielago.Volador::edad = 5;

    //Otra manera es agregar la palabra virtual a las clases de las que se hereda y se usa normalmente
    miMurcielago.respirar();
    miMurcielago.edad = 5;

    cout << "La edad del murcielago es: " << miMurcielago.edad << " anhos." << endl;

    //Una tercera manera es usando clases abstractas e interfaces
}
