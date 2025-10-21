//Ejemplo de referencias

#include <iostream>
#include <string>

using namespace std;

void intercambio(int &a, int &b){

    int temp;

    temp = a;
    a = b;
    b = temp;

}

void incrementarSiNoNulo (int *valor){

    if (valor != nullptr){

        ++(*valor);

    }

}

int main(){

    int var1, var2, var3;

    var1 = 10;
    var2 = 20;
    var3 = 30;

    cout <<"*****************************" << endl;
    cout <<"Ejemplo de paso de referencia" << endl;
    cout <<"*****************************" << endl;

    cout << "\nEl primer valor es: " << var1 << ", y el segundo valor es: " << var2 << endl;

    intercambio(var1, var2);

    cout << "\nAhora que se hizo el cambio: " << endl;
    cout << "El primer valor es: " << var1 << ", y el segundo valor es: " << var2 << endl;

    cout <<"\n***************" << endl;
    cout <<"Usando Punteros" << endl;
    cout <<"***************" << endl;

    cout << "\nValor inicial: " << var3 << endl;

    incrementarSiNoNulo(&var3);

    cout << "Valor incrementado es: " << var3 << endl;

}
