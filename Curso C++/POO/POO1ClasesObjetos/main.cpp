//Muestra de la sintaxis de las clases y los objetos

#include <iostream>

using namespace std;

class Carro{

    //Atributos o propiedades
    string modelo, color;
    int cilindros, potencia;
    double precio;

    //Metodos o comportamientos
    public: void arrancar(){

        cout << "El carro esta arrancando." << endl;

    }

    public: void acelerar(){

        cout << "El carro esta acelerando." << endl;

    }

    void frenar(){

        cout << "El carro esta frenando." << endl;

    }

    void girar(){

        cout << "El carro esta girando." << endl;

    }

    bool enMarcha(){

        return true;

    }

    //Metodos getters y setters
    public: void setPrecio(double p){
        if (p < 0){
            precio = 15000;
        }else{

            precio = p;
        }
    }

    public: double getPrecio(){
        return precio;

    }

};

int main(){

    Carro carroDiana, carroDorian;

    carroDorian.arrancar();
    carroDorian.setPrecio(27000);

    cout << "El precio del carro de Dorian es: " << carroDorian.getPrecio() << " US$ " << endl;

    //Crear punteros a objetos
    Carro *ptrCarroDiana = &carroDiana;
    Carro *ptrCarroDorian = &carroDorian;

    //Usar el puntero para acceder a los metodos de carroDiana
    ptrCarroDiana -> setPrecio(37000);

    cout << "El precio del carro de Diana es: " << ptrCarroDiana -> getPrecio() << " US$ " << endl;

    //Usar el puntero para acceder a los metodos de carroDorian
    ptrCarroDorian -> acelerar();


}
