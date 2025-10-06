#include <iostream>
using namespace std;

int main() {
    int numero, original, invertido = 0, residuo;

    cout << "Ingrese un número entero: ";
    cin >> numero;

    original = numero; // Guardamos el número original

    while (numero != 0) {
        residuo = numero % 10;              // Último dígito
        invertido = invertido * 10 + residuo; // Se forma el número al revés
        numero /= 10;                       // Se elimina el último dígito
    }

    if (original == invertido)
        cout << "El número es palíndromo." << endl;
    else
        cout << "El número no es palíndromo." << endl;

    return 0;
}
