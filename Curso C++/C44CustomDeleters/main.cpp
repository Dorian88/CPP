#include <iostream>
#include <memory>

using namespace std;

class Persona{
    public:
        Persona(){
            cout << "Objeto Persona creado" << endl;
        }

        ~Persona(){
            cout << "Destructor Persona ejecutado" << endl;
        }

        void saludar(){
            cout << "Hola desde Persona" << endl;
        }
};

void eliminarPersona(Persona *p){
    cout << "Custom deleter ejecutandose" << endl;

    delete p;
}

int main(){
    {
        shared_ptr<Persona> persona(
            new Persona(),
            eliminarPersona
        );

        persona -> saludar();

        cout << "Numero de propietario: " << persona.use_count() << endl;
    }

    cout << "Fin del programa" << endl;
}
