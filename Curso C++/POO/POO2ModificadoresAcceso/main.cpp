//Modificadores de acceso a los metodos y atributos de una clase
#include <iostream>

using namespace std;

class MiClase{

    protected:
        int edad;

    public:
        void setValor(int valor){

            if (valor < 0 || valor > 100){

                cout << "Tu edad no puede ser.";

                edad = 0;

            }else{

                edad = valor;

            }
        }

        /*void getMostrar(){

            cout << "Valor edad: " << edad << endl;

        }*/
};

//Herencia
class Derivada:public MiClase{
    public:
        void getMostrar(){

                cout << "Valor edad: " << edad << endl;

        }

};
int main(){

   MiClase obj;
   Derivada obj1;

   obj.setValor(41);
   //obj.getMostrar();

   obj1.setValor(41);
   obj1.getMostrar();

}
