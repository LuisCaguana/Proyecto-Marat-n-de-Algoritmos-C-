#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Ingrese la cantidad de elementos del arreglo: ";
    cin >> n;

    int arreglo[n];

    cout << "Ingrese los elementos del arreglo:\n";
    for (int i = 0; i < n; i++) {
        cin >> arreglo[i];
    }

    int mayor = arreglo[0];
    int menor = arreglo[0];

    for (int i = 1; i < n; i++) {
        if (arreglo[i] > mayor)
            mayor = arreglo[i];
        if (arreglo[i] < menor)
            menor = arreglo[i];
    }

    cout << "\nEl número mayor es: " << mayor << endl;
    cout << "El número menor es: " << menor << endl;

    return 0;
}
