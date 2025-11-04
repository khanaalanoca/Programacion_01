// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Fecha creación: 3/11/2025
// Número de ejercicio: 10

#include <iostream>
using namespace std;

struct Fraccion {
    int numerador;
    int denominador;
};

// algoritmo de Euclides
int MCD(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

Fraccion ReducirFraccion(Fraccion f) {
    Fraccion fraccionSimplificada;
    int mcd = MCD(f.numerador, f.denominador);
    fraccionSimplificada.numerador = f.numerador / mcd;
    fraccionSimplificada.denominador = f.denominador / mcd;

    // si el denominador es negativo, pasamos el signo al numerador
    if (fraccionSimplificada.denominador < 0) {
        fraccionSimplificada.denominador *= -1;
        fraccionSimplificada.numerador *= -1;
    }

    return fraccionSimplificada;
}

int main() {
    Fraccion f, fs;
    cout << "Ingrese numerador: ";
    cin >> f.numerador;
    cout << "Ingrese denominador: ";
    cin >> f.denominador;
    if (f.denominador == 0) {
        cout << "Error: denominador no puede ser cero.\n";
        return 1;
    }
    fs = ReducirFraccion(f);
    cout << "Fraccion simplificada: " << fs.numerador << "/" << fs.denominador << endl;
    return 0;
}
