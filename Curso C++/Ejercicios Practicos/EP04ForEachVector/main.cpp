//Ingresar al vector numeros hasta se se introduzca un 0

#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector <int> numeros;
    int num;

    cout << "Introduce varios numeros. Escribe cero para salir. " << endl;

    while(cin >> num && num != 0){

        numeros.push_back(num);

    }

    cout << "Haz introducido los siguientes numeros:" << endl;

    for(int n : numeros){

        cout << n << " ";

    }

    cout << endl;
}
