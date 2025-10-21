/*Ejemplo sencillo de Array con tres dimensiones:

Programa que controle día, mes y hora por el que transitan los carros por un punto en particular.
*/
#include <iostream>

using namespace std;

int main(){
    int pasoCarros[24][31][12]; //Hora - Día - Mes.

    //Para el 15 de mayo a las 2 A.M.
    pasoCarros[2][14][4] = 4;

    cout << "El numero de carros que pasaron el 12 de Mayo a las 2 A.M. son: " << pasoCarros[2][14][4] << endl << endl;

    cout << "----------------------------------------------------------------" << endl;

    //Usando los Bloques.
    for(int i = 0; i < 24; i++){
        for(int j = 0; j < 31; j++){
            for(int k = 0; k < 12; k++){

                pasoCarros[i][j][k] = rand() % 1000; //Llena el array con numeros aleatorios
            }
        }
    }

    cout << "El numero de carros que pasaron el 7 de Noviembre a las 19:00 fueron: " << pasoCarros[19][6][10] << endl << endl;
}
