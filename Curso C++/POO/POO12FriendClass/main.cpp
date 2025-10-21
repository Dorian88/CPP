//Ejemplo usanado friend class

#include <iostream>

using namespace std;

class Caja{

    private:
        double largo, ancho;

    public:
        Caja(double l, double a): largo(l), ancho(a){}

        friend double calcularArea(const Caja& c);
        friend class Inspector;

};

double calcularArea(const Caja& c){

    return c.largo * c.ancho;

}

class Inspector{

    public:
        void mostrarDimensiones(const Caja& c){

            cout << "El largo de la caja es " << c.largo << ", y ancho: " << c.ancho << endl;

        }

};

int main(){

    Caja c(5.0, 3.0);
    Inspector i;

    cout << "El area de la caja es: " << calcularArea(c) << endl;
    i.mostrarDimensiones(c);

}
