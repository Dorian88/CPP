#include <iostream>
#include <memory>

using namespace std;

void crearNumero(){
    //int* numero = new int (200);
    unique_ptr<int> numero = make_unique<int>(200); //Esto es un smart punter

    cout << "Numero: " << *numero << endl;

    //delete numero;
}

int main()
{
    crearNumero();
}
