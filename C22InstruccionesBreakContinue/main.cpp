//Ejemplo del uso de las instrucciones break y continue

#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector <string> nombres = {"Edwin", "Mario", "Dorian", "Jennifer", "Diana", "Luisa"};
    vector <double> precios = {50, 120, 75, 300, 90, 200};
    string personaBuscada = "Diana";
    double descuento = 0.15;

    cout << "*********************************" << endl;
    cout << "Aqui se usa la instruccion break." << endl;
    cout << "*********************************" << endl;

    for(int i = 0; i < nombres.size(); i++){

        if (nombres [i] == personaBuscada){

            cout << "Persona encontrada. Nombre: " << personaBuscada << " encontrada en la posicion: " << (i+1) <<".\n";
            break;

        }

    }

    cout << "Ha terminado el ciclo.\n";

    cout << "\n************************************" << endl;
    cout << "Aqui se usa la instruccion continue." << endl;
    cout << "************************************" << endl;

    for (int j = 0; j < precios.size(); j++){

        if(precios [j] <= 100){

            continue;

        }

        precios[j] -= precios[j]*descuento;

    }

    for (int k = 0; k < precios.size(); k++){

        cout << "Precio final del producto " << (k + 1) << ": es " << precios[k] << " US$." << endl;

    }

}
