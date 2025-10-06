#include <iostream>
using namespace std;

int main() {
    int numero, suma = 0;

    cout << "Ingrese un número entero: ";
    cin >> numero;

    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            suma += i; // Sumar los divisores
        }
    }

    if (suma == numero)
        cout << numero << " es un número perfecto." << endl;
    else
        cout << numero << " no es un número perfecto." << endl;

    return 0;
}
