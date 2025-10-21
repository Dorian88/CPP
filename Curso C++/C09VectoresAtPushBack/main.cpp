//Usando los métodos At y Push Back de la libreria vector

#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector <int> records {25, 45, 60, 35};

    //Usando el metodo at
    cout << records.at(3) << endl << endl;

    //Cambiando el valor
    records.at(3) = 105;
    cout << records.at(3) << endl << endl;

    //Usando el metodo push_back
    records.push_back(105); //Agrega un nuevo valor al final del vector y cambia su tamaño

    //Si se sabe la posicion donde esta el nuevo valor
    cout << records.at(4) << endl << endl;

    //Si se NO sabe la posicion donde esta el nuevo valor
    for (int i = 0; i < records.size(); i++){

        cout << records.at(i) << endl;
    }
}
