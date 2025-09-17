// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Carnet: 13760727 L.P.
// Fecha creación: 17/09/2025
// Número de ejercicio: 6

#include <iostream>
using namespace std;


bool esPrimo(int num);
int main() {
    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    int suma = 0;
    int n = abs(numero); 

    while (n > 0) {
        int digito = n % 10;
        if (digito != 0) {
            suma += digito;
        }
        n /= 10;
    }

    cout << "Suma de digitos distintos de cero: " << suma << endl;
    // la suma es primo
    if (esPrimo(suma)) {
        cout << "La suma es un numero primo." << endl;
    } else {
        cout << "La suma no es un numero primo." << endl;
    }

    return 0;
}

// Funcion para verificar si un número es primo
bool esPrimo(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}