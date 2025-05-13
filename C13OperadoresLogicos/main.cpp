//Usando el operador lógico y (&&)

#include <iostream>

using namespace std;

void toLowerCase(string &cadena){

    for(int i = 0; i < cadena.length(); i++){

        cadena[i] = tolower(cadena[i]);

    }
}

int main(){

    int edad;
    string exMedico;

    cout << "Por favor introduce su edad: ";
    cin >> edad;
    cout << endl;

    cout << "Has pasado el examen medico (Si/No)?: ";
    cin >> exMedico;
    cout << endl;

    toLowerCase(exMedico);

    if(edad >= 18 && exMedico == "si"){

        cout << "Puedes obtener la licencia de conduccion" << endl;

    }else{

        cout << "No cumples con los requisitos para sacar la licencia de conduccion" << endl;
    }

}
