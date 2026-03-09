#include <iostream>
#include <string>

using namespace std;

class Animal{
    public:
        virtual void hacerSonido() = 0; //Hace el método abstracto
};

class Perro: public Animal{
    public:
        void hacerSonido() override{

            cout << "Estoy Ladrando" << endl;
        }
};

class Gato: public Animal{
    public:
        void hacerSonido() override{

            cout << "Estoy Maullando" << endl;
        }
};

int main(){
    Perro miPerro;
    Gato miGato;

    Animal& a = miPerro;

    a.hacerSonido();
    miGato.hacerSonido();
}
