#include <iostream>

using namespace std;

class Animal{

    public:
        virtual void hacerSonido(){

            cout << "Estoy emitiendo sonidos" << endl;

        }

};

class Perro: public Animal{

    public:
        void hacerSonido() override{
            cout << "Estoy ladrando" << endl;
        };

};

int main(){

    Perro miPerro;

    Animal& a = miPerro;

    a.hacerSonido();
}
