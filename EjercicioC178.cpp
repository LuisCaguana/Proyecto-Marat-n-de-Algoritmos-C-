#include <iostream>
using namespace std;
int main() {
    // EjercicioC178: Imprimir numeros pares hasta n
    int n;
    cout << "Ingrese n: ";
    if(!(cin >> n)) return 0;
    for (int i = 2; i <= n; i += 2) cout << i << " ";
    cout << endl;
    return 0;
}
