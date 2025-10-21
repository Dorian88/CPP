//Juego para adivinar un numero

#include <iostream>
#include <cstdlib> // Para rand() y srand
#include <ctime> //Para time()
using namespace std;

int main(){

    srand(time(nullptr));

    int numeroSecreto, intentos, miNumero;
    char continuar;
    bool adivinado;

    do{

        numeroSecreto = rand() % 100 + 1;
        intentos = 0;
        adivinado = false;

        while(intentos < 5 && !adivinado){

            cout << "Introduce un numero entre 1 y 100: ",
            cin >> miNumero;

            if (miNumero == numeroSecreto){

                cout << "Felicitacioes!!! haz acertado el numero\n";

                adivinado = true;

            }else if(miNumero < numeroSecreto){

                cout << "El numero es mayor\n";

            }else{

                cout << "El numero es menor\n";

            }

            intentos++;

        }

        if(!adivinado){

            cout << "Lo siento, no adivinaste el numero. El numero era: " << numeroSecreto << ".\n";

        }

        cout << "Quieres jugar de nuevo? (s/n) ";
        cin >> continuar;

    }while (continuar == 's' || continuar == 'S');

    cout << "Gracias por jugar\n" << endl;
}
