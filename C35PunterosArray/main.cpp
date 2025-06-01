//Usando los punteros en los arrays

#include <iostream>

using namespace std;

int main(){

    int cifras [] = {10, 20, 30};
    int *ptrCifras {cifras};

    cout << cifras << endl; //Imprime la direccion de memoria del primer elemento del Array
    cout << *cifras << endl; //Imprime el primer elemento del Array

    cout << "\n**********************" << endl;
    cout << "Usando el puntero" << endl;
    cout << ptrCifras << endl;
    cout << *ptrCifras << endl;

    cout << "\n**********************" << endl;
    cout << "Aritmetica de punteros" << endl;
    cout << ptrCifras [0] << endl;
    cout << ptrCifras + 1 << endl; //Accedo al la direccion de memoria del elemento 2 del array
    cout << *(ptrCifras + 1) << endl;
    cout << ptrCifras [2] << endl;
    //cout << *ptrCifras << endl;

}
