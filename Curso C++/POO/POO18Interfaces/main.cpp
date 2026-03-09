#include <iostream>
#include <string>

using namespace std;

class IVolador{
    public:
        virtual void puedoVolar() = 0;
        virtual ~IVolador(){};
};

class Pajaro:public IVolador{
    public:
        void puedoVolar() override{
            cout << "Vuelo batiendo mis alas" << end;
        }
};

class Avion:public IVolador{
    public:
        void puedoVolar() override{
            cout << "Vuelo consumiendo combustible" << endl;
        }
};

class Murcielago:public IVolador{
    public:
        void puedoVolar() override{
            cout << "Vuelo guiandome por ultrasonidos" << endl;
        }
};

class Superman:public IVolador{
    public:
        void puedoVolar() override{
            cout << "Vuelo utilizando mis superpoderes" << endl;
        }
};

int main(){
}
