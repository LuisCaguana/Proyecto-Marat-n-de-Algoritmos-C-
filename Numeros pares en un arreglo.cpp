#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Ingrese la cantidad de elementos del arreglo: ";
    cin >> n;

    int arreglo[n];
    int pares = 0, impares = 0;

    cout << "Ingrese los elementos del arreglo:\n";
    for (int i = 0; i < n; i++) {
        cin >> arreglo[i];
        if (arreglo[i] % 2 == 0)
            pares++;
        else
            impares++;
    }

    cout << "\nCantidad de números pares: " << pares << endl;
    cout << "Cantidad de números impares: " << impares << endl;

    return 0;
}
