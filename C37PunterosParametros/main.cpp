//Pasar punteros por parametros a una funcion

#include <iostream>

using namespace std;

void cambiaValor(int *valor){

    (*valor) += 5;

}

int main(){

    int num = 5;

    cout << "Valor antes de llamar la funcion " << num << endl;

    cambiaValor(&num);

    cout << "Valor despues de llamar la funcion " << num << endl;

}
