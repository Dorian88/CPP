#include <iostream>
#include <memory>

using namespace std;

class ClaseB;

class ClaseA{

    public:
        weak_ptr<ClaseB> b;

    ClaseA(){
        cout<<"Clase A creada" << endl;
    }

    ~ClaseA(){
        cout<<"Clase A destruida" << endl;
    }
};

class ClaseB{

    public:
        shared_ptr<ClaseA> a;

    ClaseB(){
        cout<<"Clase B creada" << endl;
    }

    ~ClaseB(){
        cout<<"Clase B destruida" << endl;
    }
};

int main(){
    shared_ptr<ClaseA> objetoA = make_shared<ClaseA>();
    shared_ptr<ClaseB> objetoB = make_shared<ClaseB>();

    objetoA -> b = objetoB;
    objetoB -> a = objetoA;

    cout<<"Propietarios clase A: " << objetoA.use_count()<< endl;
    cout<<"Propietarios clase B: " << objetoB.use_count()<< endl;
}
