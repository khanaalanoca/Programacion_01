// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Carnet: 13760727 L.P.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 27/08/2025
// Número de ejercicio: 9

#include <iostream>
using namespace std;

int main ()
{
    int edad;
    cout << "Ingrese su edad: ";
    cin >> edad;
    // Determina el rango de edad
    if (edad <= 12) {
        cout << "Eres un niño." << endl;
    } else if (edad <= 18) {
        cout << "Eres un adolescente." << endl;
    } else if (edad > 18 && edad < 60) {
        cout << "Eres mayor de edad." << endl;
    } else {
        cout << "Eres un adulto mayor." << endl;
    }
    return 0;
}