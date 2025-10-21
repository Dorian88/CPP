//Trabajando con vectores

#include <iostream>
#include <vector>

using namespace std;

int main(){

    //Declaracion de vectores
    vector <int> records (5); //El tipo va entre <> (Obligatorio) y el tamaño va entre parentesis (Opcional)
    vector <char> letras (10);
    vector <double> salario (350, 2125.50);
    int i;

    //Recorriendo un vector usando el bulcle for
    for (int i = 0; i < 5; i++){

        cout << records[i] << endl;
    }

    cout << endl;
    for (int j = 0; j < 10; j++){

        cout << letras[j] << endl;
    }

    cout << endl;
    for (int k = 0; k < 350; k++){

        cout << salario[k] << endl;
    }

    //Recorriendo un vector usando el bulcle while
    cout << endl;
    while(i < salario.size()){

        cout << salario[i] << endl;
        i++;
    }
}
