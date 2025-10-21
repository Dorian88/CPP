//Programa para elaborar una cotizacion para instalar tarimas flotantes

#include <iostream>

using namespace std;

int main(){

    int metrosCalidadMedia {0}, metrosCalidadAlta {0};
    const double precioCalidadMedia {35.5}, precioCalidadAlta {55.3}, iva{0.19};
    const int expiraCotizacion{30};

    cout << "BIENVENIDO AL SERVIVIO DE INSTALACION DE TARIMA FLOTANTE" << endl;

    cout << "\n Cuantos metros quieres instalar con calidad media: ";
    cin >> metrosCalidadMedia;

    cout << "\n Cuantos metros quieres instalar con calidad alta: ";
    cin >> metrosCalidadAlta;

    cout << "\nCotizacion para instalacion de tarima flotante " << endl;

    cout << "Numero de metros de calidad media: " << metrosCalidadMedia << endl;
    cout << "Numero de metros de calidad alta: " << metrosCalidadAlta << endl;
    cout << "Precio de tarima calidad media: " << precioCalidadMedia << endl;
    cout << "Precio de tarima calidad alta: " << precioCalidadAlta << endl;

    cout << "PRECIO ANTES DE IVA: ";
    cout << (precioCalidadMedia * metrosCalidadMedia) + (precioCalidadAlta * metrosCalidadAlta) << " $." << endl;

    cout << "PRECIO DESPUES DE IVA: " << ((precioCalidadMedia * metrosCalidadMedia) + (precioCalidadAlta * metrosCalidadAlta)* iva) << " $." << endl;

    cout << "-----------------------------------------------------------------------------------" << endl;

    cout << "PRECIO TOTAL: ";

    cout << (precioCalidadMedia * metrosCalidadMedia) + (precioCalidadAlta * metrosCalidadAlta) + ((precioCalidadMedia * metrosCalidadMedia) + (precioCalidadAlta * metrosCalidadAlta)* iva) << " $." << endl;

    cout << "Cotizacion valido durante: " << expiraCotizacion << " dias.";
}
