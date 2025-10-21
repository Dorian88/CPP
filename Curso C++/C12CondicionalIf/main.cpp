//El Uso del condicional if

#include <iostream>

using namespace std;

int main(){

    int edad;

    cout << "Por favor introduce su edad: ";
    cin >> edad;

    if(edad >= 18){

        cout << "Tienes la edad suficiente para sacar la licencia de conduccion" << endl;

    }else{

        cout << "No tienes la edad suficiente para sacar la licencia de conduccion" << endl;
    }

}
