//Clase persona con destructor

#include <iostream>

using namespace std;

class Persona{

    int* edad;

    public:
        Persona(int e){

            edad = new int (e);

        }

    //Destructor
    ~Persona(){

        delete edad;

    }

};


int main(){

    Persona p1(18);

}
