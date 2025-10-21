//Variante del bucle for

#include <iostream>

using namespace std;

int main(){

    int edades [] = {15, 25, 75, 35, 95, 45};
    string email = "doaljari@gmail.com";

    for(int e: edades){

        cout << e << " ";
    }

    cout << endl;

    for(auto e1: email){

        cout << e1 << endl;

        if(e1 == '@'){

            cout << "Encontre la arroba" << endl;

        }
    }


}
