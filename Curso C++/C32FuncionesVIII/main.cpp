//Funciones Recursivas

#include <iostream>

using namespace std;

int factorial(int n){

    if(n == 0){

        return 1;

    }else{

        return n*factorial(n-1);

    }
}

int main(){

    int numero;
    cout << "Calculando el factorial de un numero\n\n";

    cout << "Ingrese un numero: ";
    cin >> numero;

    cout << "El factorial de " <<  numero << " es " << factorial(numero) << endl;

}
