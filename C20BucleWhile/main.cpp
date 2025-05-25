//Usando el bucle While

#include <iostream>

using namespace std;

int main(){

    int i {1};

    while (i <= 10){

        if (i % 2 == 0){

            cout << i << " Es par." << endl;

        }else{

            cout << i << " Es impar." << endl;

        }

        i++;

    }

}
