#include <iostream>
using namespace std;

int main() {
    int altura;

    cout << "Ingrese la altura de la pirámide: ";
    cin >> altura;

    for (int i = 1; i <= altura; i++) {
        // Espacios en blanco
        for (int j = i; j < altura; j++) {
            cout << " ";
        }

        // Asteriscos
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
