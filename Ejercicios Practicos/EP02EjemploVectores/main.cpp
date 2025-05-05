/*Crear un vector vacio e ir llenandolo desde consola*/

#include <iostream>
#include <vector>

using namespace std;

int main(){

    int elementos = 0, nuevoElem;

    cout << "Cuantos elementos quieres que tenga el vector? ";
    cin >> elementos;
    cout << endl;

    vector <int> records (elementos);

    //Lleno el vector con valores ingresados por consola
    for(int i = 0; i < elementos; i++){

        cout << "Introduce el elemento numero " << i+1 << " del vector ";
        cin >> nuevoElem;
        records.push_back(nuevoElem);
        cout << endl;

    }

    cout << "A continuacion te muestro los elementos almacenados en el vector:" << endl;

    //Mostrar los elementos del vector
    for(int j = 0; j < records.size(); j++){

        cout << records.at(j) << "  ";

    }

    cout << endl;

}
