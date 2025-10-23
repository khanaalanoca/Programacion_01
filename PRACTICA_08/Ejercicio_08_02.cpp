// Materia: Programación I, Paralelo 4
// Autor: Khana Alaoca Limachi
// Carnet: 13760727
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 22/10/2025
// Número de ejercicio: 2

#include <iostream>
using namespace std;
int exponecial (int b, int e);
int main()
{
    int base=0;
    int exponente=0;
    int resultado=0;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente: ";
    cin >> exponente;
    resultado= exponecial(base, exponente);
    cout << "El resultado de: "<< base << "^"<< exponente << " es igual a: "<< resultado;
    return 0;
}

int exponecial (int b, int e){
    if (e == 0) {
        return 1;  // Cualquier número elevado a 0 es 1
    }
    return b * exponecial(b, e - 1);
}