//Ejemplo sencillo que muestra la devolucion de un puntero desde una clase

#include <iostream>
#include <string>

using namespace std;

//Definicion de la clase
class Carro{

    private:
        string modelo;

    //Constructor que inicializa el modelo del carro
    public:
        Carro(string mod): modelo(mod){}

    //Metodo para obtener el modelo del carro
    string getModelo() const{

        return modelo;

    }

};

//Funcion que crea un nuevo carro y devuelve un puntero a el.
Carro *crearCarro(string modelo){

    Carro *nuevoCarro = new Carro(modelo);

    return nuevoCarro;

}

int main(){

    //Crea un carro llamando la funcion crearCarro
    Carro *miCarro = crearCarro("Mazda MX5");

    //Accede al modelo a traves del puntero y muestra el modelo
    cout << "Modelo del carro: " << miCarro ->getModelo() << endl;

    //Libera la memoria una vez que se ha usado
    delete miCarro;

}
