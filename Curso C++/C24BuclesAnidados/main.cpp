//Trabajando con bucles anidados

#include <iostream>

using namespace std;

int main(){

    const int MIN_NUM = 1;
    const int MAX_NUM = 10;

    for(int i = MIN_NUM; i <= MAX_NUM; i++){

        cout << "Tabla del " << i << ":\n";

        for(int j= MIN_NUM; j <= MAX_NUM; j++){

            cout << i << " x " << j << " = " << (i*j) << "\n";

        }

        cout << "\n";

    }

}
