#include <iostream>
#include <memory>

using namespace std;

class Textura{
    private:
        string archivo;

    public:
        Textura (string archivo):archivo(archivo){
            cout << "Cargando textura: " << archivo << endl;
        }

        ~Textura(){
            cout << "Liberando textura: " << archivo << endl;
        }

        void dibujar(){
            cout << "Dibujando con textura: " << archivo << endl;
        }
};

class Enemigo{
    private:
        shared_ptr<Textura> textura;

    public:
        Enemigo (shared_ptr<Textura> textura):textura(textura){

    }

    void dibujar(){

        textura -> dibujar();
    }
};

int main(){
    shared_ptr<int> p1 = make_shared<int>(100);

    cout << "Ejemplo 1:" << endl;

    {
        shared_ptr<int> p2 = p1;

        cout << "Valor: " << *p1 << endl;
        cout << "Propietarios: " << p1.use_count() << endl;
    }

    cout << "Propietarios despues del bloque: " << p1.use_count() << endl;

    cout << "\nEjemplo 2:" << endl;

    shared_ptr<Textura> texturaEnemigo = make_shared<Textura>("enemigo.png");

    {
        Enemigo enemigo1(texturaEnemigo);
        Enemigo enemigo2(texturaEnemigo);
        Enemigo enemigo3(texturaEnemigo);

        cout << "Propietarios de la textura: " << texturaEnemigo.use_count() << endl;

        enemigo1.dibujar();
        enemigo2.dibujar();
        enemigo3.dibujar();
    }

    cout << "Despues de destruir enemigos: " << endl;
    cout << "Propietarios de la textura: "<< texturaEnemigo.use_count() << endl;
}
