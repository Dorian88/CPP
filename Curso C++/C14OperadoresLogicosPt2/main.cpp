/*Uso del operador lógico  ó (||)
  Ejemplo de becas.
  Se da beca a los alumnos si su calificación es superior a 8
  o si la distancia del domicilio a la institución es superior a
  20 km, además los ingresos familiares son inferiores a 20000 US$
*/

#include <iostream>

using namespace std;

int main(){

    int calificacion, distanciaInst, ingresos;

    cout << "Por favor introduce la calificacion: ";
    cin >> calificacion;
    cout << endl;

    cout << "Por favor introduce la distancia a la institucion en Km: ";
    cin >> distanciaInst;
    cout << endl;

    cout << "Por favor introduce los ingresos familiares: ";
    cin >> ingresos;
    cout << endl;

    if (calificacion > 8 || (distanciaInst > 20 && ingresos < 20000)){

        cout << "Cumple con los requisitos. Puedes acceder a la beca" << endl;

    }else{

        cout << "No cumple con los requisitos. No puedes acceder a la beca" << endl;

    }
}
