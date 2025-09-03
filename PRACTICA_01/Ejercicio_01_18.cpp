// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Carnet: 13760727 L.P.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 31/08/2025
// Número de ejercicio: 18

#include <iostream>
using namespace std;
// si la suma de los divisores solo son  y el mismo numero es primo
int esPrimo(int n) {
    if (n <= 1) {
        return 0; 
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1; 
}
int main() {
    int contador = 0; 
    int numero =0;
    cout << "Los primeros 100 numeros primos son:" << endl;
    while (contador < 100) {
        if (esPrimo(numero) == 1) {
            cout << numero << " ";
            contador++;
            if (contador % 10 == 0) {
                cout << endl; // saltos de liena
            }
        }
        numero++;
    }
    return 0;
}