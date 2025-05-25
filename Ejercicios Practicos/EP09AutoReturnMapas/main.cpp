//Ejercicio de auto-return con mapas

#include <iostream>
#include <map>
#include <string>

using namespace std;

auto buscaEnMapa(const map<string, int> & myMap, const string & key) -> map<string, int>::const_iterator{

    return myMap.find(key);

}

int main(){

    //Creando y llenando un mapa
    map <string, int> miMapa = {
        {"Manzana", 1},
        {"Platano", 2},
        {"Naranja", 3}
    };

    //Buscar un elemento en el mapa
    auto it = buscaEnMapa(miMapa, "Platano");

    //Verificar si el elemento fue encontrado y mostrar su valor
    if(it != miMapa.end()){

        cout << "Encontrado 'Platano' con el valor: " << it -> second << endl;

    }else{

        cout << "'Platano' no se ha encontrado en el mapa" << endl;

    }

    return 0;
}
