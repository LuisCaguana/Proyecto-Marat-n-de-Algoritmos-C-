#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un número para mostrar su tabla de multiplicar: ";
    cin >> numero;

    cout << "\nTabla de multiplicar del " << numero << ":\n";

    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}
