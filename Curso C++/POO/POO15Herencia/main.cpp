//Ejemplo de como funciona la herencia

#include <iostream>
#include <string>

using namespace std;

class Persona{
    protected:
        string nombre;
        int edad;

    public:
        Persona(string n, int e): nombre(n), edad(e){}

        virtual void mostrarDatos(){ //El compilador genera una tabla de metodos virtuales para cada clase
            cout << "Nombre: " << nombre << endl;
            cout << "Edad: " << edad << endl;
        }
};

class Alumno: public Persona{ //Sintaxis de herencia
    private:
        string estudios;

    public:
        Alumno(string n, int e, string es): Persona(n, e), estudios(es){} //Persona(n, e) es el constructor de la clase padre Persona

        void mostrarDatos(){
            //Reutilizacion del metodo de la clase padre
            Persona::mostrarDatos();
            cout << "Estudios: " << estudios << endl;
        }
};

class Profesor: public Persona{
    private:
        string materia;

    public:
        Profesor(string n, int e, string ma): Persona(n, e), materia(ma){}

        void mostrarDatos(){
            //Reutilizacion del metodo de la clase padre
            Persona::mostrarDatos();
            cout << "Materia: " << materia << endl;
        }
};

int main(){
    Alumno a1("Dorian", 41, "Ingenieria de sistemas");
    Profesor p1("Luisa", 39, "Historia");
    Persona* persona1 = &a1;
    Persona* persona2 = &p1;

    cout << "Usando la herencia de manera normal" << endl;

    cout << "---------ALUMNO---------" << endl;
    a1.mostrarDatos();

    cout << "\n---------PROFESOR---------" << endl;
    p1.mostrarDatos();

    cout << "\nUsando el polimorfismo" << endl;

    persona1 -> mostrarDatos(); //Polimorfismo
    cout << "\n";
    persona2 -> mostrarDatos();
}
