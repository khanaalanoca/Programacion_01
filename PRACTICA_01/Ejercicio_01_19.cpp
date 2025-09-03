// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Carnet: 13760727 L.P.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 31/08/2025
// Número de ejercicio: 19

#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero para mostrar su tabla de multiplicar: ";
    cin >> numero;
    cout << "Tabla de multiplicar del " << numero << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }
    return 0;
}
