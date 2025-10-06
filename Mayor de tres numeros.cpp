#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Ingrese el primer número: ";
    cin >> a;

    cout << "Ingrese el segundo número: ";
    cin >> b;

    cout << "Ingrese el tercer número: ";
    cin >> c;

    int mayor = a; // Suponemos que el primero es el mayor

    if (b > mayor)
        mayor = b;
    if (c > mayor)
        mayor = c;

    cout << "El número mayor es: " << mayor << endl;

    return 0;
}
