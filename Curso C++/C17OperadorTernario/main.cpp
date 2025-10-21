//Usando el operador Ternario

#include <iostream>

using namespace std;

int main(){

    int num {};

    cout << "Introduce un numero entero: ";
    cin >> num;

    //Usando if
    if(num % 2 == 0){

        cout << num << " es par." << endl;

    }else{

        cout << num << " es impar." << endl;

    }

    //Usando el operador ternario

    cout << num << ((num % 2 == 0)? " es par: ": " es impar") << endl;
}
