// Materia: Programación I, Paralelo 4
// Autor: Khana Alaoca Limachi
// Carnet: 13760727
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 22/10/2025
// Número de ejercicio: 7

#include <iostream>
using namespace std;

int Q(int n);

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    cout << "Q(" << n << ") = " << Q(n) << endl;
    return 0;
}
int Q(int n) {
    if (n == 1) // caso base
        return 1;
    else
        return n * n + Q(n - 1); // llamada recursiva
}
