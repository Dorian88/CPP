//Hacer un programa que me indique si un numero es primo o no

#include <iostream>

using namespace std;

int main(){

    int num;
    bool esPrimo = true;

    cout << "Introduce un numero positivo: ";
    cin >> num;
    cout << endl;

    for (int i = 2; i <= num / 2; i++){

        if(num % i == 0){

            esPrimo = false;
            break;
        }
    }

    if(esPrimo){

        cout << num << " Es primo" << endl;

    }else{

        cout << num << " No es primo" << endl;
    }
}
