//Ejemplo de sobrecarga de asignacion

#include <iostream>
#include <string>

using namespace std;

class MiClase{
    int *datos;

    public:
        MiClase(int valor){
            datos = new int (valor);
        }

        //Sobrecarfa de operador asignacion (Copia profunda)
        MiClase& operator = (const MiClase& otra){
            delete datos;

            datos = new int (*otra.datos);

            return *this;
        }

        ~MiClase(){
            delete datos;
        }
};

int main(){
    MiClase a(5), b(10);

    b = a;
}
