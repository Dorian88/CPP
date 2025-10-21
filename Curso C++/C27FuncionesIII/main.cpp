//Paso de parametro por valor y referencia a una funcion

#include <iostream>
#include <cmath>

using namespace std;

void ejemploFuncionValor (int num){

    num = 50;

}

void ejemploFuncionReferencia (int &num){

    num = 50;

}

int main(){

    int miNum = 10, num = 20;

    cout << "*********************************************" << "\n";
    cout << "Pasando un parametro por valor a una funcion:" << "\n";
    cout << "*********************************************" << "\n";

    cout << "Valor original: " << miNum << "\n";

    ejemploFuncionValor(miNum);
    cout << "Valor despues de llamar a la funcion: " << miNum << "\n\n";

    cout << "*********************************************" << "\n";
    cout << "Pasando un parametro por valor a una funcion:" << "\n";
    cout << "*********************************************" << "\n";

    cout << "Valor original: " << num << "\n";

    ejemploFuncionReferencia(num);
    cout << "Valor despues de llamar a la funcion: " << num << "\n\n";

}
