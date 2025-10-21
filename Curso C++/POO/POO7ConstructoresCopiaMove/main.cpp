//Muestra como se maneja los constructores copia y constructores de movimento

#include <iostream>

using namespace std;

class Ejemplo{

    private:
        int *puntero;

    public:
        Ejemplo(int valor){

            puntero = new int(valor);

        }

        //Constructor Copia
        Ejemplo (const Ejemplo &origen){

            puntero = new int(*origen.puntero);

        }

        //Constructor de movimiento (Move constructor)
        Ejemplo(Ejemplo&& origen):puntero(origen.puntero){

            origen.puntero = nullptr;

        }

        ~Ejemplo(){

            delete puntero;

        }
};

int main(){

    //Ejemplo obj1(10);
    Ejemplo* obj1 = new Ejemplo(10);
    Ejemplo obj2 = move(*obj1);

    delete obj1;

    return 0;
}
