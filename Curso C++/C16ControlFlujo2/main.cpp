//Usando Switch Case comparando caracteres

#include <iostream>

using namespace std;

int main(){

    char idioma, categoria;

    cout << "Selecciona el idioma (E: Espanol, I: Ingles): ";
    cin >> idioma;

    switch (idioma){
        case 'E':
        case 'e':

            cout << "Selecciona la categoria (L: Libros, R: Ropa, T: Tecnologia): ";
            cin >> categoria;

            switch (categoria){
                case 'L':
                case 'l':
                    cout << "Haz escogido la categoria Libros." << endl;
                    break;

                case 'R':
                case 'r':
                    cout << "Haz escogido la categoria Ropa." << endl;
                    break;

                case 'T':
                case 't':
                    cout << "Haz escogido la categoria Tecnologia." << endl;
                    break;

                default:
                    cout << "Categoria no valida" << endl;
            }
            break;

            case 'I':
            case 'i':

            cout << "Select a category (B: Books, C: Clothing, T: Tecnology): ";
            cin >> categoria;

            switch (categoria){
                case 'B':
                case 'b':
                    cout << "You have selected books category." << endl;
                    break;

                case 'C':
                case 'c':
                    cout << "You have selected clothing category." << endl;
                    break;

                case 'T':
                case 't':
                    cout << "You have selected tecnology category." << endl;
                    break;

                default:
                    cout << "Invalid category" << endl;
            }
            break;

            default:
                cout << "Idioma no valido" << endl;
    }
}
