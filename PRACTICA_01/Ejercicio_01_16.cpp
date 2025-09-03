// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Carnet: 13760727 L.P.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 31/08/2025
// Número de ejercicio: 16

#include <iostream>
using namespace std;
int esPrimo(int n) {
    if (n <= 1) return 0; 
    if (n == 2) return 1; 
    if (n % 2 == 0) return 0; 
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return 0; // No es primo
    }
    return 1; // Es primo
}
int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    if (esPrimo(numero)) {
        cout << numero << " es un numero primo." << endl;
    } else {
        cout << numero << " no es un numero primo." << endl;
    }
    return 0;
}