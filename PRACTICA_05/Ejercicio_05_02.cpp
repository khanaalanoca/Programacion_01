// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Fecha creación: 30/09/2025
// Número de ejercicio: 2
#include <iostream>
using namespace std;

int main() {
    double voltios[] = {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};
    int n = sizeof(voltios) / sizeof(voltios[0]);

    for (int i = 0; i < n; ++i) {
        cout << voltios[i] << " ";
        // Imprimir salto de linea cada 3 elementos
        if ((i + 1) % 3 == 0) {
            cout << endl;
        }
    }

    return 0;
}
