//Sensor que mide la temperatura cada tiempo determinado.

#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

double leerTemperatura(){

    return 20.0 + (rand() % 20);

}

void esperar(int segundos){

    this_thread::sleep_for(chrono::seconds(segundos));

}

int main(){

    const double LIMITETEMPERATURA = 35.0;
    double tempActual;

    while(true){

        tempActual = leerTemperatura();

        cout << "Temperatura actual: " << tempActual << " °C" << endl;

        if(tempActual > LIMITETEMPERATURA){

            cout << "ALERTA!! temperatura elevada detectada: " << tempActual << " °C" << endl;

        }

        esperar(3);

    }

}
