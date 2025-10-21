#include <iostream>
#include <utility> //Para std::move

using namespace std;

void funcion1(int &x){ //x es un L-Value

    x += 5;

}

void funcion2(int &&x){ //x es un R-Value

    x += 6;

}

string miFuncion(string &&z){

    z+= ". Como estas";

    return move(z);

}

int main(){

    int z = 15; //z es un L-Value, 15 es un R-Value
    int b = z; //b es un L-Value, z es un R-Value. Antes z es evaluado como R-Value
    string s1 = "Hola Dorian";
    string s2 = move(s1); //Move mueve el contenido de una variable a otra. Similar al cortar y pegar.

    cout << "El valor de b es: " << b << endl;

    funcion1(z);

    cout << "El valor de z es: " << z << endl;

    funcion2(move(b));

    cout << "El valor de b es: " << b << endl;

    cout << "El contenido de s1 es: " << s1 << endl;
    cout << "El contenido de s2 es: " << s2 << endl;

    s2 = miFuncion(move(s1));

    cout << "Ahora el contenido de s2 es: " << s2 << endl;

}
