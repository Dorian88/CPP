//Programa que muestra el uso de las variables

#include <iostream>

using namespace std;

int main(){

  string nombre = "Dorian"; //Inicialización tradicional
  int edad {21}; //Iniciación de lista
  double salario; //declaradción sin inicialización

  cout << "Introduce el salario del empleado: ";
  cin >> salario; //Inicialización de la variable salario

  cout << "-----------------------------------------------------------------------------------" << endl;

  cout << "Datos del empleado:" << endl;
  cout << "Nombre: " << nombre <<". Edad: " << edad << ". Salario: " << salario << "." << endl;


  cout << "Introduce la edad del empleado: ";
  cin >> edad; //Cambia el valor de la variable edad.

  cout << "-----------------------------------------------------------------------------------" << endl;

  cout << "Datos del empleado:" << endl;
  cout << "Nombre: " << nombre <<". Edad: " << edad << ". Salario: " << salario << "." << endl;

}
