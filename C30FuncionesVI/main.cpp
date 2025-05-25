//Ejemplo usando sobrecarga de funciones

#include <iostream>

using namespace std;

//Función para sumar dos numeros enteros
int sumar(int a, int b){

    return a + b;

}

//Función para sumar tres numeros enteros
int sumar(int a, int b, int c){

    return a + b + c;

}

//Función para sumar dos numeros flotantes
float sumar(float a, float b){

    return a + b;

}

int main(){

    cout << "**************************************************" << "\n";
    cout << "Llamando a la funcion que suma dos numeros enteros" << "\n";
    cout << "**************************************************" << "\n";

    cout << sumar (3, 4) << endl; //Llama a la primera funcion

    cout << "\n**************************************************" << "\n";
    cout << "Llamando a la funcion que suma dos numeros enteros" << "\n";
    cout << "**************************************************" << "\n";

    cout << sumar (3, 4, 5) << endl; //Llama a la segunda funcion

    cout << "\n**************************************************" << "\n";
    cout << "Llamando a la funcion que suma dos numeros enteros" << "\n";
    cout << "**************************************************" << "\n";

    cout << sumar (3.0f, 4.5f) << endl; //Llama a la tercera funcion
}
